#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>  // Include this header for memset

/*
	NOTE:
	When we have a method with a lot of parameters, in that case is useful to use a STRUCT
*/


//This form is not useful!! :
//void draw_rectangle(int x1, int x2, int y1, int y2, float width, std::string color, std::string font); 



//The strategy is use a STRUCT to bunch the parameters 
struct rectangle{

	float width;
	std::string line_color;
	std::string fill_color;
	std::string fill;
	std::string stack;
	std::string color;
	std::string font;
	std::string label;
};

void draw_rectangle(int,int,int,int,rectangle);

int main(){
	rectangle r1;
	r1.width = 200.0f;
	r1.line_color = "RED";
	r1.fill_color = "GREEN";
	r1.fill = "BLUE";
	r1.stack = "STACK2";
	r1.color = "YELLOW";
	r1.font = "Font1";
	r1.label="Label1";
	
	draw_rectangle(1,2,3,4, r1);
	
	//------
	rectangle r2;
	memset(&r2, '\0', sizeof(r2)); // give a default values in the struct.

	draw_rectangle(5,6,7,8, r2);
	
	getch();
	return 0;
}

void draw_rectangle(int x1, int x2, int y1, int y2, rectangle rect){
	std::cout<<"Drawing rectangle: "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<std::endl;
	std::cout<<"Width: "<<rect.width<<std::endl;
	std::cout<<"line_color: "<<rect.line_color<<std::endl;
	std::cout<<"fill_color: "<<rect.fill_color<<std::endl;
	std::cout<<"fill: "<<rect.fill<<std::endl;
	std::cout<<"stack: "<<rect.stack<<std::endl;
	std::cout<<"color: "<<rect.color<<std::endl;
	std::cout<<"font: "<<rect.font<<std::endl;
	std::cout<<"label: "<<rect.label<<std::endl;
}