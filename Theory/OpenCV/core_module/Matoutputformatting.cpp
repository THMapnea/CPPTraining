#include<opencv2/opencv.hpp>
#include<iostream>



//here we will see how we can format the output of our matrix to better suit them for use in other
//software or algorithm




int main(){
	//let's declare our matrix that we want to show
	cv::Mat my_matrix(3, 3, CV_32F);
	//let's fill it with random values where cv::scalar() are lower and upper limit
	cv::randu(my_matrix, cv::Scalar(0), cv::Scalar(255));

	//here we can see the normal formatting
	std::cout << "the matrix with the standard output is:\n" << my_matrix << std::endl << std::endl;

	//python formatting 
	//to do so we use a formatting function that takes as an argument a Formatter object
	std::cout << "the matrix with the python output is:\n" << cv::format(my_matrix,cv::Formatter::FMT_PYTHON) << std::endl<<std::endl;

	//c formatting
	std::cout << "the matrix with the c output is:\n" << cv::format(my_matrix, cv::Formatter::FMT_C) << std::endl<<std::endl;

	//numpy
	std::cout << "the matrix with the numpy output is:\n" << cv::format(my_matrix, cv::Formatter::FMT_NUMPY) << std::endl<<std::endl;

	//CSV
	std::cout << "the matrix with the CSV output is:\n" << cv::format(my_matrix, cv::Formatter::FMT_CSV) << std::endl<<std::endl;


	return 0;
}
