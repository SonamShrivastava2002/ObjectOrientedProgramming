/*Calculate and display the grade of the student(cont.....from lab2).Assume slabs as 0-39,40-59,60-74,75-100*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //initializing paraneters
    float marks;
    //taking input
    cout<<"Enter the marks:";
    cin>>marks;
    //checking for grade using if-else-if conditions
    if(marks<=39){
        cout<<"D"<<endl;
    }
    else if(marks<=59){
        cout<<"C"<<endl;
    }
    else if(marks<=74){
        cout<<"B"<<endl;
    }
    else{
        cout<<"A"<<endl;
    }
    return 0;
}
    