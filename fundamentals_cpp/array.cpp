 /*Array in CPP*/
 
 #include <iostream>
 #include <stdio.h>
 #include <conio.h>
 
 int* fillTheArray(int* , int);
 void printArray(int* , int);
 
 int main(){
	 int arrayNumbers[4] = {88,11,2,40};
	 
	 int i = 0, acum = 0;
	 
	 while(i<4){
		printf("The element in the index %d is %d \n", (i+1), arrayNumbers[i]);
		acum += arrayNumbers[i];
		i++;
	 }
	 
	 printf("The total of the array is %d \n",acum);
	 
	 
	 // sizeof() --> useful to get the size of an array
	 // size_t --> kind of data that replace: unsigned types
	 
	 size_t sizeArr = sizeof(arrayNumbers) / sizeof(arrayNumbers[0]);
	
	 printf("The size of the array is %d\n",sizeArr);
	 
	 
	 
	 // Also we can define dinamycally the size of the array
	 int countElements = 0;
	 printf("Type the size of the array: \n");
	 std::cin>>countElements;
	 
	 //This is the way to fill and show the array. (Using pointers)
	 int* arr;
	 arr = fillTheArray(arr, countElements);
	 
	 printArray(arr, countElements);
	 
	 
	 
	 getch();
 	 
	 return 0;
}

int* fillTheArray(int* arr, int count){
	arr = new int[count];
	for(int i =0 ; i < count ; i++){
		std::cin>>*(arr+i);
	}
	return arr;
}

void printArray(int* arr, int count){

	for(int i = 0 ; i < count; i++){
		printf("The element in the index %d is %d \n", (i+1), *(arr+i));
	}
	
}