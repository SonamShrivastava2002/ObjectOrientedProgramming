/*Write a function to find the largest divisor and return the same*/

//including header file
#include <bits/stdc++.h>
using namespace std;
int largestDivisor(int n){
    //initializing answer
    int temp = 1;
    //loop from 2 to n/2
    for(int i=2;i<=(n/2);i++){
        //updating answer if the condition is true
        if(n%i == 0){
            temp = i;
        }
    }
    //returning answer
    return temp;
}
//main function
int main(){
    //taking input
    int n;
    cin>>n;
    //declaring answer
    int ans = largestDivisor(n);
    //printing answer
    cout<<ans;
    return 0;
}