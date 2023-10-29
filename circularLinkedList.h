#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int d){
            this -> data = d;
            this -> next = NULL;
        }
        //destructor
        ~Node(){
            int value = this -> data;
            if(this -> next != NULL){
                next = NULL;
                delete next;
            }
        }
        //inserting at end
        void insertNode(Node* &head,int d){
            Node* temp = new Node(d);
            //non-empty linked list
            Node* curr = head;
            while(curr -> next != head){
                curr = curr -> next;
            }
            temp -> next = head;
            curr -> next = temp;
        }
        //printing the linked list
        void print(Node* &tail){
            Node* temp = tail;
            if(tail == NULL){
                cout<<"NULL"<<endl;
                return;
            }
            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }while(temp!=tail);
            cout<<endl;
        }
        //deleting from end
        void deleting(Node* &head){
            Node* temp = head;
            Node* pre = head;
            while(temp -> next != head){
                pre = temp;
                temp = temp -> next;
            }
            pre -> next = head;
            delete(temp);
        }
};