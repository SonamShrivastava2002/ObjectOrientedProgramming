/*calculate salary of an employee based on:-
    a) basic salary to be entered by user
    b) hra = 18%,da = 15%,ta = 10%*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //taking input salary
    int salary;
    cout<<"Enter the basic salary:";
    cin>>salary;
    //initializing parameters
    float hra = 0.18;
    float da = 0.15;
    float ta = 0.1;
    //calculating the final answer
    float total = salary*hra + salary*da + salary*ta;
    //printing the output
    cout<<"total slary of the employee is:"<<total<<endl;
    return 0;
}