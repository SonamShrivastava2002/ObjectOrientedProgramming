/*Write a program to add a number with its next number (assume starting at 1) till user enters a value 1*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //next number starting from 1
    int sum = 1;
    //sum when no number is added
    int tillSum = 0;
    //infinite loop which run till the user enter 1
    while(true){
        //initializing variable
        int n;
        cin>>n;
        //condition which break the loop when user enter 1
        if(n==1){
            break;
        }
        //updating the sum
        tillSum += sum;
        //printing the sum till the last iteration
        cout<<"Sum Till Now: "<<tillSum<<endl;
        sum++;
    }
    return 0;
}