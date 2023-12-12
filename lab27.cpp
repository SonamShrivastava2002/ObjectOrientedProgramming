/*1.Demonstrate custom Exception Handling by creating class of NegativeAmountException. It 
should have a property msg, default and parameterized constructors.
a.Create a class Transaction which has deposit(int amount) throws xxxxxxx.
b.If the amount is negative, throw NegativeAmountException.
c.Remember that the NegativeAmountException has to be handled within the main() only.*/

#include <bits/stdc++.h>
#include "ExceptionHandling.h"
using namespace std;
int main(){
    try{
        transaction t;
        int amt;
        cout<<"Enter the amount : ";
        cin>>amt;
        t.deposit(amt);
        cout<<"Transaction completed"<<endl;
    }
    catch(NegativeAmountException a){
        a.print();
    }
    catch(exception e){
        cout<<"Exception";
    }
    return 0;
}