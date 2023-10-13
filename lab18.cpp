/*1.Add functionality to add the newNode at the start, end and after a specified data value in the list.
2.If the data value doesn’t exist, print “Node doesn’t exist”.*/

//including header file
#include <bits/stdc++.h>
#include "linkedListLab18.h"
using namespace std;
//main function
int main(){
    //making first node
    Node* head = new Node(17);
    //inserting at head
    head->InsertAtHead(head,10);
    head->InsertAtHead(head,16);
    //printing the resultant linked list
    head->Print(head);
    //inserting at tail
    Node* tail = NULL;
    tail = head->addNode(head,38);
    //printing the resultant linked list
    head->Print(head);
    //inserting after specified data
    head->InsertAtMiddle(10,head,tail,28);
    //printing the resultant linked list
    head->Print(head);
    return 0;
}