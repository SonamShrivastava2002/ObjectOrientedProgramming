//header files
#include <bits/stdc++.h>
using namespace std;
template <typename T>
//function overloaded which can take int as well as float
T overload(T a){
    T ans = a*a;
    return ans;
}
//main funtion
int main(){
    //taking input as int
    int num1;
    int result1 = overload(345);
    //printing the result
    cout<<"The results of int input is: "<<result1<<endl;

    //taking input as float
    float num2;
    float result2 = overload(3.45);
    //printing the result
    cout<<"The results of float input is: "<<result2<<endl;
    return 0;
}