#include<iostream>


//sometimes is useful to have a data type that can store different type of data all at once
//here we have the declaration of the struct and it's content
struct Contact{
	std::string name;
	std::string surname;
	int age;
	bool alive = true;
	int assigned_array[10];
}general_contact; //if we added here before the (;) a name for the struct we could also automatically instance it



//let's instance a struct sometimes it can be better to use type definition so that you can save time and space while writing 
struct Contact contact;

//prototype
void showStruct(Contact c);

int main(){
	//let's try to access and fill our struct 
	//we can do so by using the (.) operator and then the identifier of the field we want to fill
	contact.name = "pino";
	contact.surname = "gino";
	contact.age = 10;
	contact.alive = false;
	for(int i = 0; i < 10; i++){
		contact.assigned_array[i] = i;
	}
	
	//let's call the function
	showStruct(contact);
	return 0;
}

//let's try to pass a struct to a function and see how it behaves notice how we didn't need to pass a pointer since unlike c in c++ is all handled
void showStruct(Contact c){
	std::cout<<"the name of the contact is: "<<contact.name<<std::endl;
	std::cout<<"the surname of the contact is: "<<contact.surname<<std::endl;
	std::cout<<"the age is: "<<contact.age<<std::endl;
	if(contact.alive){
		std::cout<<"he/she is alive"<<std::endl;
	}else{
		std::cout<<"he/she is dead"<<std::endl;
	}
	std::cout<<"the random numbers assigned to the contact are: ";
	for(int i = 0; i < 10; i++){
		std::cout<<contact.assigned_array[i]<<",";
	}
}