#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){
	
	/*
		When we use the expresion "const char*" it means that you can change the pointer 
		but you CANNOT CHANGE the VALUE
	*/
	const char* ptr_a;
	
	ptr_a = "A";
	std::cout<<*ptr_a<<std::endl;
	
	
	ptr_a = "B"; //LEGAL
	std::cout<<*ptr_a<<std::endl;
	
	/*
	*ptr_a = "a"; // ILLEGAL
	std::cout<<*ptr_a<<std::endl;
	*/

	/*
		When we use the expresion "char* const" it means that you CANNOT CHANGE the POINTER 
		but you can CHANGE the VALUE
	*/
	
	char bValue = 'K';
	char* const ptr_b=&bValue;
	*ptr_b = 'K';
	std::cout<<*ptr_b<<std::endl;	
	
	*ptr_b = 'L';
	std::cout<<*ptr_b<<std::endl;	
	
//	ptr_b = 'L'; // ILEGAL

	return 0 ;
}