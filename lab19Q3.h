#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
        //function for inserting at head
        void InsertAtHead(Node* &head,int d){
            Node* temp = new Node(d);
            temp -> next = head;
            head = temp;
        }
        //printing the linked list
        void Print(Node* &head){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp -> next;
            }
            cout<<endl;
        }
        //function for reversing the linked list
        void reverse(Node* &head){
            Node* pre = NULL;
            Node* curr = head;
            Node* temp = head -> next;
            while(curr != NULL){
                curr -> next = pre;
                pre = curr;
                curr = temp;
                if(temp == NULL){
                    temp = NULL;
                }
                else{
                    head = curr;
                    temp = temp -> next;
                }
            }
        }
};