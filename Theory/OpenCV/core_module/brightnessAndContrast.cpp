#include<iostream>
#include<opencv2/opencv.hpp>




//we are going to check how we can modify the parameters of our input image
//we are going to see how to control brightness and contrast



int brightnessAndContrast() {

	//create the objects
	cv::Mat src = cv::imread(cv::samples::findFile("image.JPG"));

	//create an empty matrix the same size as the input image
	cv::Mat new_image = cv::Mat::zeros(src.size(), src.type());

	//declare two variable for brightness control and contrast
	double alpha = 1.3;
	int betha = 3;

	//let's loop trough the pixel of the image modify them and then assign it following the formula
	for (int y = 0; y < src.rows; y++) {
		for (int x = 0; x < src.cols; x++) {
			for (int c = 0; c < src.channels(); c++) {
				new_image.at<cv::Vec3b>(y, x)[c] = cv::saturate_cast<uchar>(alpha * src.at<cv::Vec3b>(y, x)[c] + betha);
			}
		}
	}

	//let's show the result
	cv::namedWindow("original", cv::WINDOW_NORMAL);
	cv::namedWindow("modified", cv::WINDOW_NORMAL);
	cv::imshow("original", src);
	cv::imshow("modified", new_image);

	cv::waitKey();

	return 0;
}