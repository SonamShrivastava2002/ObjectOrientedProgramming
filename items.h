#include <bits/stdc++.h>
using namespace std;
class Items{
    private:
        
    public:
        string name;
        int price;
        //default constructor
        Items(){
            cout<<"Object created at:"<<this<<endl;
            name = "";
            price = 0;
        }
        //copy constructor
        Items(string name,int price){
            this -> name = name;
            this -> price = price;
        }
};