/*write a program to add two matrices of dimensions [2x2] and store the result in the third 
matrix*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //input arrays
    int arr1[2][2] = {{1,2},{3,4}};
    int arr2[2][2] = {{7,8},{3,9}};
    //initializing the size of input array
    int n = 2;
    int m = 2;
    //resultant array
    int arr[2][2];
    //adding the elements of input arrays and storing the value in new array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //printing the value for new array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}