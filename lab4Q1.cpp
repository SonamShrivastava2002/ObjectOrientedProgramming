/*Write a program to print successive powers (starting at 2) of a number entered by user till 5*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //input number given by user
    int n;
    cin>>n;
    //initializing answer with random value;
    int temp = 1;
    //loop from 2 to 5
    for(int i=2;i<=5;i++){
        //loop for each value of power from 0 to i
        for(int j=0;j<i;j++){
            //storing ans
            temp = temp*n;
        }
        //printing ans
        cout<<temp<<" ";
        temp = 1;
    }
    return 0;
}