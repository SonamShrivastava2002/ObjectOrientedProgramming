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
        //destructor
        ~Node(){
            int value = this -> data;
            //memory free
            if(this -> next != NULL){
                this->next = NULL;
                delete next;
                
            }
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
        //function for deleting the node
        void deleteNode(int position,Node* &head){
            //deleting first or start node
            if(position == 1){
                Node* temp = head;
                head = head->next;
                //memory free of start node
                //temp -> next = NULL;
                delete temp;
            }
            else{
                Node* curr = head;
                Node* pre = NULL;
                int cnt = 1;
                while(cnt<position){
                    pre = curr;
                    curr = curr->next;
                    cnt++;
                }
                pre -> next = curr -> next;
                //curr -> next = NULL;
                delete curr;
            }
        }
        //deleting all occurences of the node
        void allOccurences(Node* &head,int d){
            Node* temp = head;
            int pos = 1;
            while(temp != NULL){
                if(temp -> data == d){
                    temp = temp -> next;
                    deleteNode(pos,head);
                }
                else{
                    temp = temp -> next;
                    pos++;
                }
                
            }
        }
        //deleting last occurence of the node
        void lastOccurence(Node* &head,int d){
            Node* temp = head;
            int pos = 1;
            int p = 0;
            while(temp != NULL){
                if(temp -> data == d){
                    p = max(pos,p);
                }
                pos++;
                temp = temp -> next;
            }
            deleteNode(p,head);
        }
};