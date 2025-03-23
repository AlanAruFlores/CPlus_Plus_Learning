/*
	typedef --> is useful to define type of variables on another way
*/

#include <stdio.h>
#include <iostream>
#include <conio.h>

//custom datatypes
typedef int number;
typedef char str[100];
typedef int numArr[10];


//additional functions
void printArr(numArr);

//main function
int main(){
	
	number n1 = 4 , n2 = 8;
	printf("The result is %d \n", (n1+n2));
	
	
	str word;
	
	printf("Type a phrase:");
	std::cin.getline(word,100,'\n');
	
	printf("The word is %s \n", word); // %s allow us to print a STRING
	
	

	//fill the array
	numArr arr;
	for(int i  =0 ; i < 10; i++){
		printf("Fill the array in the index number %d \n", (i+1));
		std::cin>>arr[i];
	}
	
	
	printArr(arr);
	
	getch(); // useful to pause the program
	return 0;
}

//implementing additional functions
void printArr(numArr arr){
	for(int i  =0 ; i < 10; i++){
		printf("Element %d is: %d \n",(i+1), arr[i]);
	}
}
	

