#include<iostream>
#include<opencv2/opencv.hpp>



//here we are going to see how we can blend and for example stack image one on top of the other


int linearBlendImages() {

	//prepare the parameters
	double alpha = 0.5,beta = 1.0 - alpha;
	
	//create the matrix image variable
	cv::Mat src1, src2, dst;

	//load the images !!they must have the same dimension
	src1 = cv::imread(cv::samples::findFile("image1.JPG"));
	src2 = cv::imread(cv::samples::findFile("image2.JPG"));

	//call the addWeighted function that will blend pixel by pixel the two images
	//this is a linear blend
	cv::addWeighted(src1,alpha,src2,beta,0.0,dst);

	//show image
	cv::namedWindow("output", cv::WINDOW_NORMAL);
	cv::imshow("output", dst);
	cv::waitKey();
	return 0;
}