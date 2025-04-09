/*
	The recursivity is a process that called itself repeatdly until to get a condition.
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>


int factorial(int);

int main(){
	int number = 4;
	
	int result = factorial(number);
	
	std::cout<<"The result is: "<<result<<std::endl;
	
	getch();
	return 0;
	
}


int factorial(int number){
	if(number == 0){
		number = 1;
	}else{
		number = number * factorial(number-1);
	}
	
	return number;
}
