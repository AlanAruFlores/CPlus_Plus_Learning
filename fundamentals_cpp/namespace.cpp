#include <iostream>
#include <stdio.h>
#include <conio.h>


namespace methods{
	void print(){
		std::cout<<"Printing from another namespace"<<std::endl;
	}
}

void print(){
	std::cout<<"Printing from current namespace"<<std::endl;
}

int main(){
	
	//this is calling the print() method from the "methods" namespace
	methods::print();
	
	print();
	
	getch();
	return 0;
}