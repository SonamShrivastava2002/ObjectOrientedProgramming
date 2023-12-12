/*Demonstrate Template concept by -
Creating a function to multiply int, float etc. data types.*/

#include <bits/stdc++.h>
#include "multiply.h"
using namespace std;
int main(){
    int intAns = multiply(238,129);
    float floatAns = multiply(1.414,1.732);
    cout<<"Multiplying integers : "<<intAns<<endl;
    cout<<"Multiplying float : "<<floatAns<<endl;
    return 0;
}