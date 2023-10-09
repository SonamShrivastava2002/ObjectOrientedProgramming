/*write a function to find greatest number in an array*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function to find largest number in array
int maximum(int *arr,int n){
    //initializing ans with minimum value of int
    int maxi = INT_MIN;
    //loop from 1 to n
    for(int i=0;i<n;i++){
        //updating the ans
        maxi = max(maxi,arr[i]);
    }
    //returning the ans
    return maxi;
}
int main(){
    //input array
    int arr[] = {18,29,17,39,7};
    //storing the answer
    int max_num = maximum(arr,5);
    //pinting the answer
    cout<<max_num<<endl;
    return 0;
}