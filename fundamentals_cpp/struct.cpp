 /*
 struct is useful to store elements.
 */
 
 #include <iostream>
 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 
 
 struct Person{
	std::string name;
	int age;
 } person1 = {"Person1", 24},
person2 = {"Person2", 40};


int main(){
	
	std::cout<<"Person 1 Name: "<<person1.name<<std::endl;
	std::cout<<"Person 1 Age: "<<person1.age<<std::endl;
	
	
	std::cout<<"Person 2 Name: "<<person2.name<<std::endl;
	std::cout<<"Person 2 Age: "<<person2.age<<std::endl;
	
	
	getch();
} 