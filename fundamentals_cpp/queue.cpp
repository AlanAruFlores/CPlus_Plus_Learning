#include <iostream>
#include <conio.h>
#include <stdio.h>

struct Node{
	int value;
	Node* next;
};	


void addNode(Node*&, Node*&, int);
Node* enqueue(Node*&);
bool checkIfEmpty(Node*&);

void showQueue(Node*);
int main(){
	Node* front = nullptr;
	Node* end = nullptr;
	
	//Adding elements in the queue
	addNode(front,end,1);
	addNode(front,end,2);
	addNode(front,end,3);
	addNode(front,end,4);
	
	//Showing the queue
	showQueue(front);
	
	//Enqueueu 
	Node* node = enqueue(front);
	std::cout<<"The value retrieved of the node: "<<node->value<<std::endl;

	//Showing the queue
	showQueue(front);
		
	
	getch();
	return 0;
}

void addNode(Node*& front, Node*& end, int value){
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = nullptr;
	if(checkIfEmpty(front)){
		front =  newNode;
	}else{
		end->next = newNode;
	}
	
	end = newNode;
}

Node* enqueue(Node*& front){
	Node* node = front;
	front = front->next;
	return node;
}


bool checkIfEmpty(Node*& front){
	return front == nullptr;
}

void showQueue(Node* front){
	
	std::cout<<"Show queue: "<<std::endl;
	while(!checkIfEmpty(front))
	{
		std::cout<<front->value<<std::endl;
		front = front->next;
	}

}