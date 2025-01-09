#include<iostream>



//prototype
void towerOfHanoi(int num, char src, char dst, char temp);

//another example of algorithm with recursion is the tower of Hanoi
//that runs with time complexity of O(2^N)
//down we can see what we want to do for n = 3
/*

	Initial:      Step 1:       Step 2:       Step 3:       Step 4:
     	 A | 321       A | 32        A | 3         A | 3         A |
	 B |           B | 1         B | 1         B |           B | 3
	 C |           C |           C | 2         C | 21        C | 21

	Step 5:       Step 6:       Step 7:
 	 A | 1         A | 1         A |
  	 B | 3         B | 32        B | 321
	 C | 2         C |           C |

*/
int main(){
	//declare the number of disks
	int num = 3;
	
	//show the sequence
	std::cout<<"the sequence of move involved in the tower of Hanoi are: "<<std::endl;
	
	//call the function
	towerOfHanoi(num, 'A','B','C');
	
	
	return 0;
}


//implementation of the recursive function
void towerOfHanoi(int num, char src, char dst, char temp){
	//terminating condition
	if(num < 1){
		return;
	}
	
	//Move the top num - 1 disks from the source peg (src) to the temporary peg (temp) using the destination peg (dst) as an auxiliary.
	towerOfHanoi(num - 1, src, temp ,dst);
	
	//show the move we made
	std::cout<<"Move "<<num<<" disk from peg "<<src<<" to peg "<<dst<<std::endl;
	
	//Move the num - 1 disks from the temporary peg (temp) to the destination peg (dst) using the source peg (src) as an auxiliary.
	towerOfHanoi(num - 1, temp, dst, src);

}
