 
 /*
  vector is a dynamic array that stores collection of elements same type in contiguous memory
 */
 #include <stdio.h> 
 #include <iostream>
 #include <conio.h>
// Include the vector library
#include <vector>
 
 using namespace std;
 
 
 void printVector(vector<int>&);
 
 int main(){
	 
	 //creating a vector with 4 elements
	vector<int> arrIntegers = {1,2,3,4};	
	
	//creating a vector with default values "10"
	vector <int> arrIntegers2 (5,10);

	printVector(arrIntegers);
	printVector(arrIntegers2);
	
	getch();
	return 0;
 }
 
 void printVector(vector<int>& arr){
	 for(auto elem : arr){
		 cout<<elem<<"-";
	 }
	 cout<<endl; 
 }