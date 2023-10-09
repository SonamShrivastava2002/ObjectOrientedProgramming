/*Demonstrate the use of pointer to a pointer concept*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function for pointer to pointer
void pointer2pointer(int **ptr){
    //taking input of the modified value
    int value;
    cin>>value;
    //modifying initial value
    **ptr = value;
}
//main function
int main(){
    //taking input for initial value
    int num;
    cin>>num;
    //pointer to number
    int *p = &num;
    //pointer to pointer
    int **ptr = &(p);
    //Before modifying
    cout<<"Before Modifying : "<<endl<<num<<"\n"<<(*p)<<endl;
    
    pointer2pointer(ptr);
    
    //after modifying
    cout<<"After Modifying : "<<endl<<num<<"\n"<<(*p);
    return 0;
}