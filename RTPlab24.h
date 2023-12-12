#include <bits/stdc++.h>
using namespace std;
class parent{
    public:
        string name;
        void print(){
            cout<<"Name of the parent: "<<name;
        }
};
class child : public parent{
    public:
        void print(){
            cout<<"I am children class";
        }
};