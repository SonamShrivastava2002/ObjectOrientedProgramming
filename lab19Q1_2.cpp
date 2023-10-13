/*1.Add functionality to delete all occurrences of a node in list.
2.Add functionality to delete the last occurrences of a node in list.*/

//including header file
#include <bits/stdc++.h>
#include "linkedListDeletion.h"
using namespace std;
//main function
int main(){
    //making new node
    Node* head = new Node(17);
    //inserting at head
    head->InsertAtHead(head,92);
    head->InsertAtHead(head,16);
    head->InsertAtHead(head,92);
    head->InsertAtHead(head,50);
    //printing the linked list
    head->Print(head);
    //deleteing all occuremces of 92
    head->allOccurences(head,92);
    //printing the linked list
    head->Print(head);
    //inserting new nodes
    head->InsertAtHead(head,16);
    head->InsertAtHead(head,7);
    //printing the linked list
    head->Print(head);
    //deleting the last occurence
    head->lastOccurence(head,16);
    //printing the linked list
    head->Print(head);
    return 0;
}