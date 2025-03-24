 
#include <stdio.h>
#include <iostream>
#include <conio.h>
 
typedef int number;

bool checkIfIsOver(number);
int finishProgram();
 
int main(){
	 
	 number age;
	 
	 printf("Type the age of the number: \n");
	 std::cin>>age;
	 
	 if(checkIfIsOver(age)){
		printf("The person is over\n");
		return finishProgram();
	 }
	 
	printf("The person is not over\n");
	return finishProgram();
 }
 
 
 bool checkIfIsOver(number age){
	 return age >= 18;
 }
 
 int finishProgram(){
	 getch();
	 return 0;
 }