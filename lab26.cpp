/*Demonstrate Exception Handling by using try-catch.
a.Throw int if a number is even.
b.Throw char if a number is odd.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int var;
    try{
        cout<<"Enter input: ";
        cin>>var;
        if(var % 2 == 0){
            throw 16;
        }
        else{
            throw 'o';
        }
    }
    catch(int ifEven){
        cout<<"Even number "<<ifEven<<endl;
    }
    catch(char ifOdd){
        cout<<"Odd number "<<ifOdd<<endl;
    }
    catch(...){
        cout<<"Unknown exception occured"<<endl;
    }
    return 0;
}