#include <bits/stdc++.h>
using namespace std;
//base class:Vehicle
class Vehicle{
    public:
        int wheels;
        string type;
        virtual void print(){        //virtual-so that compiler can determine itself to know which print function needs to work
            cout<<"This is a Vehicle with "<<wheels<<" wheels"<<endl;
            cout<<"Type of the Vehicle is: "<<type<<endl;
        }
};
//Derived class:Car
class Car:public Vehicle{
    public:
        int wheels;
        string type;
        void print() override{      //override-if compiler get confused between which print function to be displayed it will preference to override funtion
            cout<<"This is a car with "<<wheels<<" wheels"<<endl;
            cout<<"Type of the car is: "<<type<<endl;
        }
};
//Derived class:SportsCar
class SportsCar : public Car{
    public:
        int wheels;
        string type;
        //unique attribute
        string brand;
        void print() override{
            cout<<"This is a sports car with "<<wheels<<" wheels"<<endl;
            cout<<"Type of the sports car is: "<<type<<endl;
            cout<<"This is a sports car of brand "<<brand<<endl;
        }
};