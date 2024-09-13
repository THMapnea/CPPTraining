#include<iostream>




int main(){
	
	for(int i = 0; i < 10; i++){
		if(i == 8){
			//sometimes we want to exit from a cycle in a very peculiar moment to do so we can use
			//the break statement for example like we do in switch cases
			break;
		}else if(i == 5){
			//if we want to coninue and skip a piece of code we can cal the keyowrd continue
			continue;
		}
	}
	
	
	return 0;
}