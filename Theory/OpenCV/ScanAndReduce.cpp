#include<opencv2/opencv.hpp>
#include<iostream>





//since all we are going to do is process images we need to understand how and what are the method to manipulate the image 
//we are going to use matrix so we need to see how we can manipulate them and also what type of matrix we can find and use
//here I am going to focuse primarly on the code the reference can be found in the official openCV site



int main() {




	return 0;
}


//this method is the most efficient without considering the core modules it basically modifies the value based on a LUT
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


//this method is a more safer one but slower compared to the precedent it need the same input parameters
cv::Mat& ScanAndReduceIterator(cv::Mat& input_matrix, const uchar* const table) {

	//first thing we only want char type matrix
	CV_Assert(input_matrix.depth() == CV_8U);

	//we can then get the number of channels
	const int channels = input_matrix.channels();

	//sice the only used number of channels are 1 or 3 we can implement logic for each of the two
	switch (channels) {

		//1 channel grayscale
	case 1: {
		//initialize two iterator one at the beginning and one at the end
		cv::MatIterator_<uchar> it, end;
		//then we assign the two operators and until the iterator at the beginning hasnt reached the end we perform operations
		for (it = input_matrix.begin<uchar>(), end = input_matrix.end<uchar>(); it != end; ++it) {
			*it = table[*it];
		}
		break;
	}


		  //3 channels BGR
	case 3: {
		//initialize the two iterator as vector of three components since we want to access all three values Blue Green and Red
		cv::MatIterator_<cv::Vec3b> it, end;

		//then we assign the two operators and until the iterator at the beginning hasnt reached the end we perform operations
		for (it = input_matrix.begin<cv::Vec3b>(), end = input_matrix.end<cv::Vec3b>(); it != end; ++it) {
			(*it)[0] = table[(*it)[0]];
			(*it)[1] = table[(*it)[1]];
			(*it)[2] = table[(*it)[2]];
		}
		break;
	}

	default:
		break;
	}
}


//the more powerful method is non of the above but the one provided by openCV core modules
cv::Mat& OpenCVCoreModule(cv::Mat& input_matrix, const uchar* const table) {
	//we first create the look up table
	cv::Mat LookUpTable(1, 256, CV_8U);
	//then we initialize a pointer to the look up table element
	uchar* p = LookUpTable.ptr();
	//and the output where to store the output
	cv::Mat J;

	for (int i = 0; i < 256; ++i) {
		p[i] = table[i];
	}
	cv::LUT(input_matrix, LookUpTable, J);
}

