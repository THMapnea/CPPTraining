#include <opencv2/opencv.hpp> 
#include<iostream>


int main() {
    //since opencv is a image processing library let's see some of the method and basic concept revolving around
    //it's building block the Matlab, images are handled using multidimensional matrix
    //so we will need to learn to manipulate and use them

    //what the following code does is create a 2 by 2 matrix of CV_UC3(8 bit long unsigned char)
    //and assign it a scalar of 3 values 
    //so we basically built a 2X2 matrix in wich each element is an array of dimension 3
    cv::Mat matrix_1(2, 2, CV_8UC3, cv::Scalar(0, 0, 255));
    std::cout << "the matrix is:\n" << matrix_1 << std::endl; //fortunately opencv helps us in the rendering of the matrices

    //we can set for example a matrix of all the same number in the following way:
    cv::Mat matrix_all_same(3,3,CV_8UC3,cv::Scalar::all(13));
    std::cout << "the matrix is:\n" << matrix_all_same << std::endl;

    //we can also create matrix with more that 2 dimension by passing a pointer containing the size of each dimension
    int sz[4] = { 2,4,2,4 };
    cv::Mat matrix_more_dimension(4, sz, CV_8UC(1), cv::Scalar::all(1));
    
    //it'is also possible to quickly build some known matrix like all one all zero
    cv::Mat all_ones = cv::Mat::ones(3,3,CV_32F);
    cv::Mat all_zeros = cv::Mat::zeros(2, 2, CV_32F);
    cv::Mat eye_matrix = cv::Mat::eye(4, 4, CV_32F);
    std::cout << "the all zero matrix is:\n" << all_zeros << std::endl;
    std::cout << "the all ones matrix is:\n" << all_ones << std::endl;
    std::cout << "the eye matrix is:\n" << eye_matrix << std::endl;

    //it is also possible to clone some part of a matrix for example a row or a column
    //this is possible by specifying the origin matrix and the part to clone for example row(1) or col(2)
    cv::Mat row_clone = eye_matrix.row(1).clone();
    cv::Mat column_clone = eye_matrix.col(2).clone();
    std::cout << "the cloned row is:\n" << row_clone << std::endl;
    std::cout << "the cloned column is:\n" << column_clone << std::endl;

    return 0;
}
