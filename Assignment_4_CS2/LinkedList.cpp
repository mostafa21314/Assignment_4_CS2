#include "LinkedList.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList()
{
    head = NULL;
}
LinkedList::~LinkedList()
{
    Node* temp = head;
    Node* temp2 = temp;
    while (temp != NULL)
    {
        temp = temp->next;
        delete temp2;
        temp2 = temp;
    }
}
void LinkedList::addNode(int x)
{
    if (head == NULL)
    {
        head = new Node;
        head->value = x;
        head->occur = 1;
    }
    else
    {
        int occ = 1;
        Node* temp = head;
        while (temp != NULL)
        {
            if (temp->value == x)
            {
                occ++;
            }
            if (temp->next == NULL)
            {
                temp->next = new Node;
                temp->next->value = x;
                temp->next->before = temp;
                temp->next->occur = occ;
            }
            temp = temp->next;
        }
    }
}
void LinkedList::removeNode(int x)
{
    if (head == NULL)
        return;
    if (head->value == x)
    {
        Node* temp = head;
        head = head->next;
        head->before = NULL;
        delete temp;
    }
    else
    {
        Node* temp = head;
        while (temp!=NULL)
        {
            if (temp->value == x)
            {
                Node* temp2 = temp;
                temp->before->next = temp->next;
                temp = temp->next;
                delete temp2;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
      
    
}
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
int LinkedList::sumList() const
{
    int sum = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        sum += temp->value;
        temp = temp->next;
    }
    return sum;
}
