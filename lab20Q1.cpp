/*Add implementation of a circular linked list (assume addition and deletion of nodes from the end).*/

//including header file
#include <bits/stdc++.h>
#include "circularLinkedList.h"
using namespace std;
//main function
int main(){
    //making head
    Node* head = new Node(21);
    head -> next = head;
    //inserting nodes
    head->insertNode(head,28);
    head->insertNode(head,12);
    head->insertNode(head,48);
    //printing the circular linked list
    cout<<"Before deleting"<<endl;
    head->print(head);
    //deleting the node
    head->deleting(head);
    //printing the circular linked list after deletion
    cout<<"After deleting"<<endl;
    head->print(head);
    return 0;
}
