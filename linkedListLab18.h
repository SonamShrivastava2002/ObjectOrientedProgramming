//including header file
#include <bits/stdc++.h>
using namespace std;
//class for node
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
        //function for adding at tail
        Node* addNode(Node* &head,int d){ //to insert node at tail
            Node* tail = head;
            while(tail -> next != NULL){
                tail = tail -> next;
            }
            //new node created
            Node* temp = new Node(d);
            tail -> next = temp;
            tail = temp;
            return tail;
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
        //function for inserting after a specified data value
        void InsertAtMiddle(int val,Node* &head,Node* &tail,int d){
            Node* temp = head;
            while(temp != NULL && temp -> data != val){
                temp = temp -> next;
            }
            if(temp == NULL){
                cout<<"Node doesn't exist"<<endl;
                return;
            }
            Node* curr = new Node(d);
            curr -> next = temp -> next;
            temp -> next = curr;
        }
};