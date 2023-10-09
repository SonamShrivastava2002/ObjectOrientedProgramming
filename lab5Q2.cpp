/*Write a function which calculates sum of each digit*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function to calculate the sum of digits
int sumOfDigits(int n){
    //initializing sum
    int sum = 0;
    while(n>0){
        //storing last digit
        int temp = n%10;
        //updating n
        n = n/10;
        //adding last digit to total sum
        sum += temp;
    }
    //returning the sum to main function
    return sum;
}
int main(){
    //taking input
    int n;
    cin>>n;
    //storing the total sum
    int ans = sumOfDigits(n);
    //printing the sum
    cout<<ans;
    return 0;
}