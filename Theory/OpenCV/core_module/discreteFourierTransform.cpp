#include<iostream>
#include<opencv2/opencv.hpp>



//here we are going to use the powerful fourier transform to retrieve information from our images
//I'am not going to explain how it works at least not in the matematical way because it goes out from the scope
//of this code you can find information on the fourier transform on the internet
//here we are going to use it to find particular 'composition in our image'




int discreteFourierTransform() {

	//first let's load our image in grayscale
	cv::Mat src = cv::imread(cv::samples::findFile("image.jpg"), cv::IMREAD_GRAYSCALE);

	//we create a padded object that helps us to expand the image to it's optimal size
	cv::Mat padded;

	//we can now get and expand the image to get a multiple of 2/3/5 wich makes the discrete fourier transform faster
	int m = cv::getOptimalDFTSize(src.rows);
	int n = cv::getOptimalDFTSize(src.cols);
	cv::copyMakeBorder(src, padded, 0, m - src.rows, 0, n - src.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0)); // put zero on the border to reach the size

	//since the fourier transform gives us back a complex result in the mathematical sense, we need to save it in a much bigger space since
	//the frequency domain is bigger than the spatial, we usually assign a float type, we are going to need to also add a new channel
	cv::Mat planes[] = {cv::Mat_<float>(padded), cv::Mat::zeros(padded.size(),CV_32F)};
	cv::Mat complex_image;

	//then we merge the planes and complex space to get the new planes with the zero
	cv::merge(planes, 2, complex_image);

	//then we do an in place calculation (same input and ouput)
	cv::dft(complex_image, complex_image);

	//now since the complex plane is divided in real part and imaginary we need to only get themagnitude image to show the rest of the value s are
	//useful to perform bottom up operations
	//first let's split again planes in the real and imaginary part in [0] and [1]
	cv::split(complex_image, planes);
	cv::magnitude(planes[0], planes[1], planes[0]); //calculates the magnitude of the 2D array and save it in the third argument
	cv::Mat magnitude_image = planes[0]; //save the magnitude image from the planes array


	//the fourier series gives us back a series of values that are not easy to interpret we can change in the logaritmic scale to see better
	//where in the white area there is more concentration and in the black less
	magnitude_image += cv::Scalar::all(1);
	cv::log(magnitude_image, magnitude_image); // switch to logarithmic scale

	//we have finished with our algorithm it is now time to prepare the data for visualization
	// crop the spectrum, if it has an odd number of rows or columns
	magnitude_image = magnitude_image(cv::Rect(0, 0, magnitude_image.cols & -2, magnitude_image.rows & -2));

	// rearrange the quadrants of Fourier image  so that the origin is at the image center
	int cx = magnitude_image.cols / 2;
	int cy = magnitude_image.rows / 2;

	cv::Mat q0(magnitude_image, cv::Rect(0, 0, cx, cy));   // Top-Left - Create a ROI per quadrant
	cv::Mat q1(magnitude_image, cv::Rect(cx, 0, cx, cy));  // Top-Right
	cv::Mat q2(magnitude_image, cv::Rect(0, cy, cx, cy));  // Bottom-Left
	cv::Mat q3(magnitude_image, cv::Rect(cx, cy, cx, cy)); // Bottom-Right

	cv::Mat tmp;                           // swap quadrants (Top-Left with Bottom-Right)
	q0.copyTo(tmp);
	q3.copyTo(q0);
	tmp.copyTo(q3);

	q1.copyTo(tmp);                    // swap quadrant (Top-Right with Bottom-Left)
	q2.copyTo(q1);
	tmp.copyTo(q2);

	cv::normalize(magnitude_image, magnitude_image, 0, 1, cv::NORM_MINMAX); // Transform the matrix with float values into a
	// viewable image form (float between values 0 and 1).

	//we can now safely display the image
	cv::namedWindow("original", cv::WINDOW_NORMAL);
	cv::namedWindow("result", cv::WINDOW_NORMAL);
	cv::imshow("original", src);
	cv::imshow("result", magnitude_image);
	cv::waitKey();



	return 0;
}