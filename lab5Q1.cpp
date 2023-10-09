/*Write a function to find whether a given number is prime or not*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//temporary function
bool primeOrNot(int n){
    //loop from 2 to n/2
    for(int i=2;i<=(n/2);i++){
        //if n is not prime
        if(n%i == 0){
            return false;
        }
    }
    //if n is prime
    return true;
}
//main function
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    //checking the input from the function primeOrNot
    else if(primeOrNot(n)){
        //if n is prime
        cout<<"Prime Number";
    }
    else{
        //if n is nor a prime
        cout<<"Not a prime";
    }
    return 0;
}