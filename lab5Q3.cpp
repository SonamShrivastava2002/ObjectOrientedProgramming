/*Use recursive function to find factorial of a given number*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function to calculate factorial
int factorial(int n){
    //base condition
    if(n==1 || n==0){
        return 1;
    }
    //storing the factorial
    int ans = n * factorial(n-1);
    //returning the final result
    return ans;
}
//main function
int main(){
    //taking input
    int n;
    cin>>n;
    //storing the answer
    int finalAns = factorial(n);
    //printing the answer
    cout<<finalAns;
    return 0;
}