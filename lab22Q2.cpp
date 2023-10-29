/*Demonstrate the use of constructor chaining i.e. Child calls the constructor of the Base.*/

//including header file
#include <bits/stdc++.h>
#include "lab22Q2.h"
using namespace std;
//main function
int main(){
    //making a variable of sports car type
    SportsCar sports = SportsCar(4, "Ford Mustang","Ford");
    sports.print();
    return 0;
}