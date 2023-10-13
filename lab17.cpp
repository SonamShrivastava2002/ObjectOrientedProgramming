/*1.Demonstrate the usage of Singly Linked List.
2.Create the addNode() which adds new node to the end of the list by default.
3.Create the display() which displays current data and the next data. Display “NULL” for the last */

//including header file
#include <bits/stdc++.h>
#include "linkedList.h"
using namespace std;
//main function
int main(){
    //making first node
    Node* head = new Node(17);
    //inserting at head
    head->InsertAtHead(head,10);
    //printing the resultant linked list
    head->Print(head);
    //inserting at tail
    Node* tail = NULL;
    tail = head->addNode(head,19);
    tail = head->addNode(head,27);
    //printing the resultant linked list
    head->Print(head);
    //inserting at middle
    head->InsertAtMiddle(2,head,tail,32);
    //printing the resultant linked list
    head->Print(head);
    //display function
    head->display(head);
    head->display(tail);
    return 0;
}