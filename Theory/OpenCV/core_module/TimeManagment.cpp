#include<opencv2/opencv.hpp>
#include<iostream>




//it is mandatory for the use of openCV to learn how images are processed 
//since the UChar domain operation may take a lot of time we usually simplify our input trough
//the use of an hash table, we basically need to transform the image color space by reducing it
//Usually it is useful to apply the following function: I_new = ((I_old)/10)*10 !!(*) it should be used in the sense of distribution

//we also need to manage time and to do so we can get the tick count or the tick frequency by calling openCV


int TimeManagment () {
	//call the cv object to retrieve the tick count
	double time = (double)cv::getTickCount();

	//we can then perform all the operation we want 
	//......
	//......
	//then we can check how much time is passed since the first execution by doing something like time_passed = (actual_time - previous_time)/tick_frequency
	time = ((double)cv::getTickCount() - time) / cv::getTickFrequency();
	std::cout << "it is passed " << time << " seconds" << std::endl;
	
	return 0;
}