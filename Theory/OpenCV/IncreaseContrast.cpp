#include<iostream>
#include<opencv2/opencv.hpp>


//we want to see how we can apply a mask to a image trough different methods in this case we are increasing the contrast,
//the values in the formula and inthe mask define by how much we do so

void sharpenFormula(const cv::Mat& my_image, cv::Mat& my_result);


int IncreaseContrast() {

	const char* filename = "image.JPG"; // name of the photo to open

	//then we create the variable in wich to store the results
	cv::Mat src, dst1, dst2;

	//let's retrieve our source image and assign it
	src = cv::imread(cv::samples::findFile(filename), cv::IMREAD_COLOR);

	//handle possible error
	if (src.empty()) {
		std::cout << "error loading or finding the image" << std::endl;
	}

	//create the windows
	cv::namedWindow("INPUT",cv::WINDOW_NORMAL);
	cv::namedWindow("OUTPUT1",cv::WINDOW_NORMAL);
	cv::namedWindow("OUTPUT2", cv::WINDOW_NORMAL);

	//let's show the input image
	cv::imshow("INPUT", src);

	//let's get the time
	double t = cv::getTickCount();

	//let's apply the function
	sharpenFormula(src, dst1);

	//let's see how much it took
	t = ((double)cv::getTickCount() - t) / cv::getTickFrequency();
	std::cout << "it took: " << t << std::endl;

	//let's see the output image
	cv::imshow("OUTPUT1", dst1);
	

	//if we dont want to proceed with the classical method we can use the 2D Filter
	//first we create the kernel that defines our sharpening in this case a 3X3 Matrix
	cv::Mat kernel = (cv::Mat_<char>(3, 3) << 0, -1, 0, 
											 -1, 5, -1,
											0, -1, 0);
	//start a timer
	t = (double)cv::getTickCount();

	//apply the filter by using the built in function
	cv::filter2D(src, dst2, src.depth(), kernel);

	//let's see how much it took
	t = ((double)cv::getTickCount() - t) / cv::getTickFrequency();
	std::cout << "it took: " << t << std::endl;

	//show the result
	cv::imshow("OUTPUT2",dst2);

	//keeep the image until click
	cv::waitKey();

	return EXIT_SUCCESS;
}


//this function does not apply a mask but uses a defined function
void sharpenFormula(const cv::Mat& my_image, cv::Mat& my_result) {

	//first we control if the image provided is an uchar image
	CV_Assert(my_image.depth() == CV_8U);

	//extract the channels
	const int n_channels = my_image.channels();

	//cretea new image with the same value as a matrix by calling the create function and passing row/columns/type
	my_result.create(my_image.size(), my_image.type());

	//let's loop trough the image matrix and apply the modification
	for (int i = 1; i < (my_image.rows - 1); ++i) {
		//create three pointers that refers to the previous,current and next pixel of the image
		const uchar* previous = my_image.ptr<uchar>(i - 1);
		const uchar* current = my_image.ptr<uchar>(i);
		const uchar* next = my_image.ptr<uchar>(i + 1);

		//pointer that stores where we are going to save the result
		uchar* output = my_result.ptr<uchar>(i);

		for (int j = n_channels; j < n_channels * (my_image.cols - 1); ++j) {
			//apply the function pixel by pixel
			output[j] = cv::saturate_cast<uchar>(5 * current[j] - current[j - n_channels]
				- current[j + n_channels] - previous[j] - next[j]);
		}
	}

	//since we cant access the borders of the image we can manually set the since they are at index 0 or similar
	my_result.row(0).setTo(cv::Scalar(0)); // top border
	my_result.row(my_result.rows - 1).setTo(cv::Scalar(0)); //bottomo border
	my_result.col(0).setTo(cv::Scalar(0)); //left border
	my_result.col(my_result.cols - 1).setTo(cv::Scalar(0)); //right border
}

