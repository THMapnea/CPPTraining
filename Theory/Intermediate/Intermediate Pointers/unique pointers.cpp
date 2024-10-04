#include<iostream>
#include<memory>




struct myDeleter{
	void operator()(int *ptr){
		std::cout<<"pointer deleted"<<std::endl;
		delete ptr;
	}
};




int main(){
	
	int x = 10;
	int y = 12;
	
	std::unique_ptr<int> ux_ptr(&x);	
	
	std::unique_ptr<int> uy_ptr = std::make_unique<int>(y);
	
	std::cout<<*ux_ptr<<","<<*uy_ptr<<std::endl;
	
	std::unique_ptr<int> uz_ptr = std::move(uy_ptr);
	
	*uz_ptr += 1;
	
	if(uy_ptr){
		std::cout<<*uy_ptr<<std::endl;
	}else if(uz_ptr){
		std::cout<<*uz_ptr<<std::endl;
	} 
	
	std::unique_ptr<int, myDeleter> custom_deletable_ptr(new int(7), myDeleter());
	     
	return 0;
}