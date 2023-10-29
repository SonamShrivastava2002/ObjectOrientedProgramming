/*1.Create a multilevel inheritance by extending Vehicle -> Car -> SportsCar. Add a unique data member attribute for the SportsCar class.
2.Override print function and print all the details.*/

//including header file
#include <bits/stdc++.h>
#include "lab21.h"
using namespace std;
//main function
int main(){
    //making a variable of sports car type
    SportsCar sports;
    //detemining its attributes
    sports.wheels = 4;
    sports.type = "Ford Mustang";
    sports.brand = "Ford";
    //making a pointer of vehicle type which takes values from sports car
    Vehicle* ptr1 = &sports;
    //making a pointer of car type which takes values from sports car
    Car* ptr2 = &sports;
    //printing the car details
    ptr1->print();
    return 0;
}