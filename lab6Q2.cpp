/*Write a function which finds nth power of a number and stores that value in a variable called 
as result. The function will accept the address of result via pointer*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function to calculate the power
void nthPower(int num,int n,long long &result){
    //loop 1 to n
    for(int i=1;i<=n;i++){
        //updating result
        result = result*num;
    }
}
//main function
int main(){
    //taking input
    int num,n;
    cin>>num>>n;
    //declaring variable result
    long long result = 1;
    //calling function
    nthPower(num,n,result);
    //printing answer
    cout<<result;
    return 0;
}