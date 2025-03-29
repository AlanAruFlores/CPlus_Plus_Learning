 /*
	In CPP we have another kind of way to use STRING. To this we need to import the library "string.h"
 */
 #include <iostream>
 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 
 
 int main(){
	 std::string word = "Hi this is another string";
	 std::cout<<word<<std::endl;	
	 
	 
	 //concat two strings
	 std::string wordOne = "This is a ";
	 std::string wordTwo = "phrase";
	 
	 std::cout<<(wordOne+wordTwo)<<std::endl;
	 
	 //get the size of an string
	 int length = word.size();
	 std::cout<<"The size of the word is: "<<length<<std::endl;
	 
	 //access a determinated character
	 std::string phrase = "Hi man";
	 char first = phrase[0];
	 std::cout<<"First character: "<<first<<std::endl;
	 
	 
	 //input a string
	 std::string inputString;
	 std::cout<<"Type a string:"<<std::endl;
	 getline(std::cin,inputString);
	 
	 std::cout<<"String: "<<inputString<<std::endl;
	 getch();
	 return 0;
 }
 
 