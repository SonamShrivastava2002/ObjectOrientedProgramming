/*Create a Stack of Items.*/

//including header file
#include <bits/stdc++.h>
#include "items.h"
using namespace std;
void printStack(stack<Items> s){
    int top = s.size();
    cout<<"Printing Stack"<<endl;
    for(int i=top;i>=0;i--){
        Items it = s.top();
        cout<<it.name<<" "<<it.price<<endl;
        s.pop();
    }
}
//main function
int main(){
    //making a stack of items
    stack<Items> s;
    //pushing values to the stack
    s.push({"Pen",10});
    s.push({"NoteBook",70});
    s.push({"Laptop",60000});
    //rinting stack
    printStack(s);
    return 0;
}