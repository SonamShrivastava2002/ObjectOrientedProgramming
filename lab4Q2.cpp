/*Write a program to find factorial of a number*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //taking input
    int n;
    cin>>n;
    //initializing answer
    long long temp = 1;
    //loop from n to 1
    for(int i=n;i>0;i--){
        //updating answer
        temp = temp*i;
    }
    //printing ans
    cout<<temp;
    return 0;
}