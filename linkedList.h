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
        //display function
        void display(Node* &head){
            Node* temp = head;
            cout<<temp->data<<endl;
            if(temp -> next != NULL){
                cout<<temp->next->data<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        //function for inserting at middle
        void InsertAtMiddle(int position,Node* &head,Node* &tail,int d){
            //insert at start
            if(position == 1){
                InsertAtHead(head,d);
                return;
            }
            Node* temp = head;
            int cnt = 1;
            while(cnt<position-1){
                temp = temp -> next;
                cnt++;
            }
            //inserting at last position
            if(temp -> next == NULL){
                addNode(tail,d);
                return;
            }
            //creating a node for d
            Node* node_to_insert = new Node(d);
            node_to_insert -> next = temp -> next;
            temp -> next = node_to_insert;
        }
};