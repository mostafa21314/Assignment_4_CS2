#include "LinkedList.h"
#include<iostream>
using namespace std;
void LinkedList::PrintList() const
{
    Node* temp = head;
    while (temp != NULL) {
        cout << "The linked list contains : ";
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
