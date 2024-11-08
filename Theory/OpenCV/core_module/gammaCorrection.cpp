#include<iostream>
#include<opencv2/opencv.hpp>



//we are going to perform a gamma correction on an image to get more accustomed with the basics 
//image operation



int gammaCorrection() {

	//let's load the image
	cv::Mat src = cv::imread(cv::samples::findFile("image.JPG"));

	//let's create a LUT for easier access
	cv::Mat lookUpTable(1, 256, CV_8U);

	//let's assign it a pointer
	uchar* p = lookUpTable.ptr();

	//let's declare a gamma value
	double gamma = 1.5;

	//let's loop trough the image
	for (int i = 0; i < 256; i++) {
		p[i] = cv::saturate_cast<uchar>(pow(i / 255.0, gamma) * 255);
	}

	//create the image and save it the image must be of the same size and type better to clone directly
	cv::Mat res;
	cv::LUT(src, lookUpTable, res);

	//display the image
	cv::namedWindow("original", cv::WINDOW_NORMAL);
	cv::namedWindow("result", cv::WINDOW_NORMAL);
	cv::imshow("original", src);
	cv::imshow("result", res);
	cv::waitKey();


	return 0;
}