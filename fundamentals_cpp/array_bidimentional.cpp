/*
	Bidimentional arrays
*/

#include <stdio.h>
#include <iostream>
#include <conio.h>


//fill the array
int** fillTheArray(int**, int , int);

void printTheArrays(int**, int, int);


int main(){
	
	int matriz [2][4] = {
		{4,3,2,1},
		{10,9,20,10}
	};
	
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j < 4; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	//Typing the elements of a bidimentional arrays dinamycally
	int rows, columns;
	
	std::cout<<"Type the amount of rows: "<<std::endl;
	std::cin>>rows;
	
	std::cout<<"Type the amount of columns: "<<std::endl;
	std::cin>>columns;
	
	int** matriz2;
	matriz2  = new int*[rows];
	
	//Setting the amount of columns for each pointer
	for(int i = 0; i < rows; i++){
		matriz2[i] = new int[columns];
	}
	
	//Getting the array
	matriz2 = fillTheArray(matriz2, rows, columns);
	
	//Print the elements
	printTheArrays(matriz2,rows,columns);
	
	getch();
	return 0;
}

int** fillTheArray(int** arr, int rows, int columns){
	for(int i =0  ; i < rows; i++){
		for(int j=0; j < columns; j++){
			printf("Type the element in the followind index [%d][%d]",i,j);
			std::cin>>*(*(arr+i)+j);
		}
	}
	
	return arr;
}

void printTheArrays(int** arr, int rows, int columns){
	for(int i =0  ; i < rows; i++){
		for(int j=0; j < columns; j++){
			printf("[%d] ",*(*(arr+i)+j));
		}
		printf("\n");
	}

}