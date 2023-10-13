/*3.Add functionality to reverse the list (in place).*/

//including header file
#include <bits/stdc++.h>
#include "lab19Q3.h"
using namespace std;
int main(){
    //making new node
    Node* head = new Node(7);
    //inserting at head
    head->InsertAtHead(head,16);
    head->InsertAtHead(head,50);
    head->InsertAtHead(head,17);
    head->InsertAtHead(head,92);
    //printing the linked list
    head->Print(head);
    //reversing the linked list
    head->reverse(head);
    //printing the linked list
    head->Print(head);
}