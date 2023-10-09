/*Gcd of the number*/

//inclusing header file
#include <bits/stdc++.h>
using namespace std;
//function to find the gcd
int gcd(int num1,int num2){
    //using euclid algorithm
    if(num1 == 0){
        return num2;
    }
    if(num2 == 0){
        return num1;
    }
    while(num1 != num2){
        if(num1 > num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
}
//main function
int main(){
    //taking inputs
    int num1;
    int num2;
    cin>>num1>>num2;
    //storing answer
    int answer = gcd(num1,num2);
    //printing answer
    cout<<answer<<endl;
    return 0;
}