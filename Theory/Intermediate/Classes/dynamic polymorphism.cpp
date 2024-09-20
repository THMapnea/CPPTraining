#include<iostream>


//data

//we define our parent class that contains one method
class Shape{
	public:
		virtual double area() const{
			return 0;
		}
};

//we define the first child class
class Circle : public Shape{
	//we create a private field
	private:
		double radius;
	
	//we override the parent function
	public:
    	double area() const override {
			return 3.14 * radius * radius;
	}
	
	//we define a constructor
	Circle(double r) : radius(r){}
	
};


//then we define the second child class
class Rectangle : public Shape{
	//private fields
	private:
		double height;
		double width;
	
	//function overriding
	public:
		double area() const override{
			return width*height;
		}
	
	//constructor
	Rectangle(double w, double h) : width(w),height(h){}
};




int main(){
	//let's instance two object
	Circle c(3);
	Rectangle r(3, 5);
	
	//now we create a pointers to the Shape class that will point to one of the two object
	Shape* shape_pointer = &c;
	
	//we can now use the shape pointer and execute the area method and we will get the method defined in the referenced child shape
	std::cout<<"the circle area is: "<<shape_pointer->area()<<std::endl;
	
	//if we reassign the pointer to the rectangle the method area will return the rectangle function
	shape_pointer = &r;
	std::cout<<"the area of the rectangle is: "<<shape_pointer->area()<<std::endl;
	
	//this can be useful for cleaner code and easier management since we will only be calling the shape_pointer and not different object
	
	return 0;
}