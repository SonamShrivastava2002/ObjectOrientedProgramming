/*Demonstrate the usage of pre and post increment and decrement operators*/

//declaring header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //to demonstrate the use of increment and decrement operators i will print the count till n given by user as input
    int n;
    cin>>n;
    int in=0;
    int de=n;
    cout<<"Increment Operator"<<endl;
    //simple counting including zero and excluding n
    for(int i=0;i<n;i++){
        cout<<in++<<" ";
    }
    cout<<endl;
    //simple counting excluding zero and including n
    in = 0;
    for(int i=0;i<n;i++){
        cout<<++in<<" ";
    }
    cout<<endl;
    cout<<"Decrement Operator"<<endl;
    //back counting excluding zero and including n
    for(int i=0;i<n;i++){
        cout<<de--<<" ";
    }
    cout<<endl;
    //back counting including zero and excluding n
    de = n;
    for(int i=0;i<n;i++){
        cout<<--de<<" ";
    }
    return 0;
}