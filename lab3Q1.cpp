/*Write a menu driven code using if-else-if ladder to create a simple calculator*/

//declaring header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //taking inputs from the user
    int a,b;
    cin>>a>>b;
    //taking operator input to know which operation is to be performed
    char op;
    cin>>op;
    //if-else-if
    if(op == '+'){
        //addition
        int sum = a + b;
        //declaring output
        cout<<"The sum of the two given integers is: "<<sum<<endl;
    } 
    else if(op == '-'){
        //subtraction
        int diff = a - b;
        //declaring output
        cout<<"The difference of the two given integers is: "<<diff<<endl;
    }
    else if(op == '/'){
        //division
        float div = (float)a/b;
        //declaring output
        cout<<"The division of the two integers is: "<<div<<endl;
    }
    else if(op == 'x'){
        //multiplication
        int multiply = a*b;
        //declaring output
        cout<<"The multiplication of the two integers is: "<<multiply<<endl;
    }
    return 0;
}