/*Add implementation of a doubly linked list (assume addition and deletion of nodes from the end).*/

//including header file
#include <bits/stdc++.h>
#include "doublyLinkedList.h"
using namespace std;
//main function
int main(){
    //making head node
    Node* head = new Node(10);
    Node* tail = head;
    //inserting in doubly linked list
    head->InsertDoublyTail(head,tail,20);
    head->InsertDoublyTail(head,tail,30);
    head->InsertDoublyTail(head,tail,40);
    head->InsertDoublyTail(head,tail,50);
    //priting the coubly linked list before deletion
    cout<<"before deletion"<<endl;
    head->Print(head);
    //delelting the last node
    head->deleteNode(head);
    //printing the doubly linked list after deletion
    cout<<"After deletion"<<endl;
    head->Print(head);
    return 0;
}