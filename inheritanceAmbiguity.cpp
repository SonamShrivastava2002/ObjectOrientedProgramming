#include <bits/stdc++.h>
using namespace std;
class A{
    public:
        int val;
        void func(){
            cout<<"function A called"<<endl;
        }
};
class B{
    public:
        void func(){
            cout<<"function B called"<<endl;
        }
};
//multiple inheritance
class C : public A,public B{

};
int main(){
    C obj;
    //to avoid inehritance ambiguity we use scope resolution operator
    obj.A :: func();
    obj.B :: func();
}