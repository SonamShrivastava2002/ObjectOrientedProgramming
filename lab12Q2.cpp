/*Overloading of Functions :-
a.	Create a class Finder having functions to find area of circle, square and rectangle.
b.	Use overloading concept to create the functions.
*widening and narrowing concept*/

#include <bits/stdc++.h>
#include "finder.h"
using namespace std;
int main(){
    Finder a;
    a.side = 5;
    Finder b;
    b.side = 6;
    int area = a.circle(a.side);
    cout<<"Area of circle:"<<area;
    area = a.square(a.side);
    cout<<"Area of square:"<<area;
    area = a.rectangle(a.side,a.side);
    cout<<"Area of rectangle:"<<area;
}