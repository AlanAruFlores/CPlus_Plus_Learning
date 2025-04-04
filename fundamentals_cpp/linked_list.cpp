#include <iostream>
#include <conio.h>
#include <stdio.h>

struct Node{
	int data;
	Node* next;
};

void addNewNode(Node*&, int);
void showLinkedList(Node*);


int main(){
	Node* list = nullptr;
	addNewNode(list,88);
	addNewNode(list,77);
	addNewNode(list,19);
	addNewNode(list,100);
	

	showLinkedList(list);
	
	getch();
	return 0;
}

void addNewNode(Node*& list, int data){
	Node* newNode = new Node();
	newNode->data = data;
	
	Node* aux1 = list, *aux2 = nullptr;
	
	while((aux1 != nullptr) && (aux1->data < data)){
		aux2 = aux1;
		aux1 = aux1->next;
	}
	
	//If is the first element
	if(list == aux1){
		list = newNode;
	}else{
		aux2->next = newNode;
	}
	newNode->next = aux1;
	
	std::cout<<"Node inserted: "<<newNode->data<<std::endl;
}

void showLinkedList(Node* list){
	
	std::cout<<"Showing the elements of the linkedList: "<<std::endl;
	while((list != nullptr)){
		std::cout<<list->data<<" -> ";
		list = list->next;
	}
	std::cout<<""<<std::endl;
}