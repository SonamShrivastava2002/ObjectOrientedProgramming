/*write a function which finds all odd numbers from an array and store 
them in another array.Assume max size of original array is 10.No garbage 
values should be present in the add array*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function to store the odd value
int oddArray(int *arrN,int n,int *odds){
    //intializing parameters
    int nums=0,index=0;
    //loop from 0 to n-1
    for(int i=0;i<n;i++){
        //if the element is odd
        if(arrN[i] % 2 != 0){
            //storing the odd element
            nums = arrN[i];
            //inserting the odd element in the new array
            odds[index] = nums;
            //incrementing the index of new array
            index++;
        }
    }
    //returning the size of new array
    return index;
}
int main(){
    //input array
    int arr[] = {18,29,16,39,6};
    //new array
    int odds[5];
    //storing the element in the new array
    int m = oddArray(arr,5,odds);
    //loop from 0 to size of odd array
    for(int i=0;i<m;i++){
        //printing the element of odd array
        cout<<odds[i]<<" ";
    }
    return 0;
}