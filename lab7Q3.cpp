/*Demonstrate the use of pointer arithmetic by re writing the squarer function*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//pointer arithmetic
int *squarer(int *arr,int n){
    //loop from 0 to n-1
    for(int i=0;i<n;i++){
        //squaring the element ans storing it
        arr[i] = arr[i]*arr[i];
    }
    //returning array
    return arr;
}
//main function
int main(){
    //input array
    int arr[] = {18,29,17,39,7};
    //calling the function
    squarer(arr,5);
    //loop from 0 to size-1 of arr
    for(int i=0;i<5;i++){
        //printing the element at that index
        cout<<arr[i]<<" ";
    }
    return 0;
}