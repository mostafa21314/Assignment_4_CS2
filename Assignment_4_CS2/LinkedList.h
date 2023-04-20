//Mostafa Gaafar
//900214463
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include"Node.h"
class LinkedList
{
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void addNode(int);
	void removeNode(int);
	void PrintList() const;
	int sumList() const;

};
#endif

