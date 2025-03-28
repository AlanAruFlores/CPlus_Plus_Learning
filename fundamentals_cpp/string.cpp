 #include <iostream>
 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 
 
 typedef char string40 [40];
 
 
 char* parseAStringToUpper(string40);
 char* parseAStringToLower(string40);
 
 int main(){
	 string40 name;
	 
	 std::cout<<"Type your name: "<<std::endl;
	 std::cin.getline(name,40,'\n');
	 
	 std::cout<<"Your name: "<<name<<std::endl;
	 
	 //strlen() --> retrieve the amount of characters in a string
	 int nameLength =  strlen(name);
	 std::cout<<"Length: "<<nameLength<<std::endl;
	 
	 //strcpy(copy, value) --> allow us to make a copy 
	 string40 copyVariable;
	 strcpy(copyVariable,name); 
	 std::cout<<"Copy: "<<copyVariable<<std::endl;
	 
	 //strcmp --> compare both strings, retrieve true if are similar otherwhise you will get a false.
	char wordOne[] = "Hi Man";
	char wordTwo[] = "Hi Man";
	
	bool flag = strcmp(wordOne, wordTwo);
	if(flag){
		std::cout<<"Both strings are equals"<<std::endl;
	}else{
		std::cout<<"Both strings are NOT equals"<<std::endl;
	}

	//toupper() --> its function is to parse a character to its upper's form
	string40 word = "HI HOW ARE YOU";	
	std::cout<<"Lower Form: "<<parseAStringToLower(word)<<std::endl;
	
	string40 word2 = "hi how are you";
	std::cout<<"Upper Form: "<<parseAStringToUpper(word)<<std::endl;
	
	
	
	
	 
	 return 0;
 }
 
 char* parseAStringToUpper(string40 word){
	 int size = strlen(word);
	 for(int i = 0 ; i < size ; i++){
		word[i] = toupper(word[i]);
	 }
	 
	 char* pointer = word;
	 
	 return pointer;
 }
 
 char* parseAStringToLower(string40 word){
	 int size = strlen(word);
	 for(int i = 0 ; i < size ; i++){
		word[i] = tolower(word[i]);
	 }
	 
	 char* pointer = word;
	 
	 return pointer;	 
 }