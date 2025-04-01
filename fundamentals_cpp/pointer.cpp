#include <stdio.h>
#include <iostream>
#include <conio.h>

/*
	A pointer is something that make a point to address memory.
*/

int main(){

	int number = 10;
	int *pointerNumber = &number;
	
	std::cout<<"Value: "<<*pointerNumber<<std::endl;
	std::cout<<"Address Memory: "<<pointerNumber<<std::endl;


	//Here Im changing the value of "number" variable
	*pointerNumber = 100;
	std::cout<<"Value: "<<number<<std::endl;
	std::cout<<"Address Memory: "<<&number<<std::endl;

		
	//Make a pointer into arrays variables
	std::cout<<"\n\nArray:"<<std::endl;
	int array[] = {1,2,3,4};
	int* pointerArr = array;
	
	size_t length = sizeof(array) / sizeof(array[0]);
	for(int i = 0 ; i < length; i++){
		std::cout<<"Value: "<<*(pointerArr+i)<<std::endl;
		std::cout<<"Address Memory: "<<pointerArr+i<<std::endl;
	}
		
	getch();
	return 0;
}	