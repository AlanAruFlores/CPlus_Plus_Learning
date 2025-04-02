#include <iostream>
#include <conio.h>
#include <stdio.h>

struct Node{
	int value;
	Node* next;
};	

void addNode(Node*&, int);
Node* deleteNode(Node*&);
void showNode(Node*);

int main(){

	Node* stack  = NULL;

	//Adding elements in the stack
	addNode(stack, 1);
	addNode(stack, 2);
	addNode(stack, 3);
	addNode(stack, 4);
	
	//Showing the elements of the stack
	showNode(stack);	

	//Deleting the element in the stack
	Node* nodeRemoved = deleteNode(stack);
	std::cout<<"The value retrieved of the node: "<<nodeRemoved->value<<std::endl;

	//Showing the elements of the stack
	showNode(stack);	
	
	getch();
	return 0;
}	

void addNode(Node*& stack, int value){
	Node* newNode =  new Node();
	newNode->value = value;
	
	newNode->next = stack;
	stack = newNode;
}

Node* deleteNode(Node*& stack){
	Node* nodeRemoved = stack;
	stack = stack->next;
	
	return nodeRemoved;
}

void showNode(Node* stack){
	
	std::cout<<"Show stack: "<<std::endl;
	while(stack != NULL)
	{
		std::cout<<stack->value<<std::endl;
		stack = stack->next;
	}

}