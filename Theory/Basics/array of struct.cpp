#include<iostream>


struct Contact{
	int age;
	bool alive;
};


//let's try to use multiple data structure togheter
struct Contact list_of_contact[10];

//prototype
void fill(struct Contact *lc);
void show(struct Contact *lc);

int main(){
	fill(list_of_contact);
	show(list_of_contact);
	
	
	return 0;
}

//here we fill the list of struct !!we need to use the pointer notation to tell the function that the parameter is a pointer to an array
void fill(struct Contact *lc){
	for(int i = 0; i < 10; i++){
		lc[i].age = i; //we can easily combine struct notation and array notation 
		lc[i].alive  = true;//we are basically saying take the i-th element and get its (.) property and modify it
	}
}

//function that shows the output
void show(struct Contact *lc){
	for(int i  = 0; i < 10; i++){
		std::cout<<"the "<<i<<" contact is "<<lc[i].age;
		if(lc[i].alive){
			std::cout<<" and is alive"<<std::endl;
		}else{
			std::cout<<" and is dead"<<std::endl;
		}
	}
}
