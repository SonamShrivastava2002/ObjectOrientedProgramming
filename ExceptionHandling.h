#include <bits/stdc++.h>
using namespace std;
class NegativeAmountException : public exception{
    private:
        string msg;
    public:
        //default constructor
        NegativeAmountException(){
            cout<<"Negative amount is not allowed"<<endl;
        }
        //parameterized constructor
        NegativeAmountException(string message){
            msg = message;
        }
        void print(){
            cout<<msg<<endl;
        }
};
class transaction{
    public:
        void deposit(int amount){
            if(amount < 0){
                throw NegativeAmountException("Negative amount is invalid");
            }
            cout<<"Amount: "<<amount<<endl;
        }
};