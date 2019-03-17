#pragma once
#include <iostream>
struct Node
{
	Node* next=nullptr;
	int value;
};

void print_list(Node * head) //wypisywanie listy
{
	Node * current = head;
	while (current != nullptr) 
	{
		std::cout << current->value << " ";
		current = current->next;
	}
	std::cout << std::endl;
}
Node* newNode(int value)  //stworzenie nowego wêz³a
{
	Node* myNode = new Node;
	myNode->value = value;
	return myNode;
}
void Append(Node * head, int value)   //dodawanie na koniec 
{
	Node * current = head;
	while (current->next != nullptr) 
	{
		current = current->next;
	}
	current->next =newNode(value);	
}
void PushFront(Node ** head, int value)  //dodawanie na pocz¹tek
{
	Node * new_node;
	new_node = newNode(value);
	new_node->next = *head;
	
	*head = new_node;
}
void DestroyList(struct Node** head)  //usuwanie calej listy
{
	
	struct Node* current = *head;
	struct Node* next;

	while (current != nullptr)
	{
		next = current->next;
		delete current;
		current = next;
	}
	*head = nullptr;
}