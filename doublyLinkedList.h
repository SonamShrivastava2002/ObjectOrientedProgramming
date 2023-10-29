//including header file
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node*next;
        //constructor
        Node(int d){
            this-> data = d;
            this-> prev = NULL;
            this-> next = NULL;
        }
        //destructor
        ~Node(){
            int value = this -> data;
            //memory free
            if(this -> next != NULL){
                this->next = NULL;
                delete next;
                
            }
        }
        //inserting at end
        void InsertDoublyTail(Node* &head,Node* &tail,int d){
            if(tail == NULL){
                Node* temp = new Node(d);
                tail = temp;
                head = temp;
            }
            else{
                Node* temp = new Node(d);
                tail -> next = temp;
                temp -> prev = tail;
                tail = temp;
            }
            
        }
        //printing the doubly linked list
        void Print(Node* head){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        //deleting the node
        void deleteNode(Node* &head){
            Node* temp = head;
            Node* pre = head;
            while(temp -> next != NULL){
                pre = temp;
                temp = temp -> next;
            }
            pre -> next = NULL;
            delete(temp);
        }
};