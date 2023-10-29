/*Assume the multilevel hierarchy as discussed in the previous lab (Vehicle -> Car -> SportsCar). Implement parameterized constructors for each class.*/

//including header file
#include <bits/stdc++.h>
#include "lab22Q1.h"
using namespace std;
//main function
int main(){
    //making a variable of sports car type
    SportsCar sports(4, "Ford Mustang","Ford");
    sports.print();
    return 0;
}