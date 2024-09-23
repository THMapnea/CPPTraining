#include<iostream>




//data 
class Triangle{
	public:
		int base;
		int height;
		int area;
	
	public:
		virtual void show(){
			std::cout<<"the base is: "<<base<<std::endl;
			std::cout<<"the height is: "<<height<<std::endl;
			std::cout<<"the area is: "<<area<<std::endl;
		}
	
	//this type of syntax allows to manipulate a class trough the initialization by the user 
	Triangle(int b, int h) : 
							//here we are doing Triangle::base = b and Triangle::height = h and so on
							base{b},
							height{h},
							area{(b * h) / 2}
							//this is the body of the constructor
							{std::cout<<"class initialized correctly"<<std::endl;};
	
	~Triangle(){
		std::cout<<"object eliminated"<<std::endl;
	};
};





int main(){
	//here when we instance the class we will need to give the required parameter just like we do for functions
	Triangle t(3,4);
	t.show();
	
	
	
	return 0;
}