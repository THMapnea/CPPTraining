#include<opencv2/opencv.hpp>
#include<iostream>




//since all we are going to do is process images we need to understand how and what are the method to manipulate the image 
//we are going to use matrix so we need to see how we can manipulate them and also what type of matrix we can find and use
//here I am going to focuse primarly on the code the reference can be found in the official openCV site



int main() {

	//necessary calls and object initialization
	//........
	//........




	return 0;
}

cv::Mat& scanImageAndReduceCPointer(cv::Mat& input_matrix, const uchar* const table) {

	//first thing we only want char type matrix
	CV_Assert(input_matrix.depth() == CV_8U);

	//we extract the color channels from the image, the number of it's rows and columns
	int channels = input_matrix.channels();
	int n_rows = input_matrix.rows;
	int n_columns = input_matrix.cols * channels;

	//the we want to check if our matrix is continuos
	//if it is we can just transform the entire matrix in a single row
	if (input_matrix.isContinuous()) {
		n_columns *= n_rows;
		n_rows = 1;
	}

	//we declare the two iterator and a pointer of uchar type
	int i, j;
	uchar* p;

	//we loop trough the rows and assign to each row a pointer to it's start
	//then we assign the value contained in the look up table to the element
	for (i = 0; i < n_rows; ++i) {

		p = input_matrix.ptr<uchar>(i);

		for (j = 0; j < n_columns; ++j) {
			p[j] = table[p[j]];
		}

	}

	//we then return our matrix
	return input_matrix;
}
