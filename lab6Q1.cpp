/*Write a function to swap two numbers using pointers*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function for swapping
void swaping(int &a,int &b){
    //algorithm of swap
    int temp = a;
    a = b;
    b = temp;
}
//main function
int main(){
    //taking input
    int a,b;
    cin>>a>>b;
    //Before swapping
    cout<<"Before Swap"<<endl;
    cout<<a<<" "<<b<<endl;

    swaping(a,b);

    //After swapping
    cout<<"After Swap"<<endl;
    cout<<a<<" "<<b;
    return 0;
}