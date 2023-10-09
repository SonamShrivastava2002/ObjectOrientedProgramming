//including header file
#include <bits/stdc++.h>
using namespace std;
//class Address
class Address{
    public:
    //initializing parameters
    int pincode;
    string city;
    string state;
    string line;
    //to print address
    void printAddress(){
        cout<<"City:"<<city<<endl;
        cout<<"State:"<<state<<endl;
        cout<<"Pincode:"<<pincode<<endl;
        cout<<"Line:"<<line<<endl;
    }
};