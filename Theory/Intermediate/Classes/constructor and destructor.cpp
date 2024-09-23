#include<iostream>



class Square{
	public:
		int l;
		int area;
		int perimeter;
	
	public:
		void compute(){
			area = l * l;
			perimeter = l * 4;
			std::cout<<"the area is: "<<area<<" the perimeter is: "<<perimeter<<std::endl;
		}
	//the constructor allows us to assign standard value to our class at first instance so that it's memeber does not result empty
	Square(){
		l = 3;
	}
	//the destructor clean the memory space in wich the object is saved
	~Square(){
		std::cout<<"the object as been removed at the end of his cycle of life"<<std::endl;
	}
	
};





int main(){
	
	//as you can see now even if we did not assign directly values to our class they are automatically initialized
	Square s;
	s.compute();
	//you will see how before the program ends the destructor frees the memory
	
	return 0;
}