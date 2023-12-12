/*reverse an array*/

//header files
#include <bits/stdc++.h>
using namespace std;

//function to reverse
void reverse(int *arr,int n){
    int i = 0;
    int j = n-1;
    while(i <= j){
        //swapping the ith and jth index elements of array
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

//main function
int main(){
    int arr[5];
    //taking input for array
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //printing original array
    cout<<"Original array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reversing the array
    reverse(arr,5);
    //priting the reversed array
    cout<<"Reversed array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}