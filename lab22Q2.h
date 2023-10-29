//including header file
#include <bits/stdc++.h>
using namespace std;
//base class
class Vehicle{
    public:
        int wheels;
        string type;
        //default constructor
        Vehicle(){
            this->wheels = wheels;
            this->type = type;
        }
        //parameterized constructor
        Vehicle(int u,string v){
            wheels = u;
            type = v;
        }
        //print function
        void print(){        
            cout<<"This is a Vehicle with "<<wheels<<" wheels"<<endl;
            cout<<"Type of the Vehicle is: "<<type<<endl;
        }
};
//Derived class:Car
class Car:public Vehicle{
    public:
        int wheels;
        string type;
        //default constructor
        Car(){
            this->wheels = wheels;
            this->type = type;
        }
        //parameterized constructor
        Car(int u,string v) : Vehicle(u,v){
            cout<<"Calling vahicle constructor"<<endl;
        }
        //print function
        void print(){      
            cout<<"This is a car with "<<wheels<<" wheels"<<endl;
            cout<<"Type of the car is: "<<type<<endl;
        }
};
//Derived class:SportsCar
class SportsCar : public Car{
    //unique attribute
    string brand;
    public:
        int wheels;
        string type;
        
        //default constructor
        SportsCar(){
            this->wheels = wheels;
            this->type = type;
            this->brand = brand;
        }
        //parameterized constructor
        SportsCar(int u,string v,string w) : Car(u,v) , brand(w){
            cout<<"Calling car constructor"<<endl;
        }
        //print function
        void print(){
            cout<<"This is a sports car of brand "<<brand<<endl;
        }
};