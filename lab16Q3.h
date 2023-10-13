/*Add all the necessary boolean functions like isEmpty() and isFull().*/

//including header file
#include <bits/stdc++.h>
using namespace std;
class Stack{
    private:
        int element[5];
        int top;
    public:
        //constructor
        Stack(){
            top = -1;
            for(int i=0;i<5;i++){
                element[i] = 0;
            }
        }
        //function for pushing element
        void push(int ele){
            if(top == 4){
                cout<<"Stack is full"<<endl;
            }
            else{
                element[++top] = ele;
            }
        }
        //popping the element
        int pop(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
                return 0;
            }
            else{
                return element[top--];
            }
        }
        //printing the peek
        int peek(){
            if(top != -1){
                cout<<element[top]<<endl;
                return element[top];
            }
            else{
                return 0;
            }
        }
        //printing the stack
        void printStack(){
            cout<<"Printing Stack"<<endl;
            for(int i=top;i>=0;i--){
                cout<<element[i]<<" ";
            }
        }
        //checking for empty
        bool isEmpty(){
            if(top == -1){
                cout<<"Stack is empty";
                return true;
            }
            else{
                cout<<"Stack is not empty";
                return false;
            }
        }
        //checking for full
        bool isFull(){
            if(top == 4){
                cout<<"Stack is full";
                return true;
            }
            else{
                cout<<"Stack is not full";
                return false;
            }
        }
};