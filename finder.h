/*Overloading of Functions :-
a.	Create a class Finder having functions to find area of circle, square and rectangle.
b.	Use overloading concept to create the functions.
*widening and narrowing concept*/

#include <bits/stdc++.h>
using namespace std;
//Without overloading
class Finder{
    public:
    int side;
    int circle(int r){
        return (3.14*(pow(r,2)));
    }
    int square(int side){
        return (pow(side,2));
    }
    int rectangle(int h,int b){
        return (h*b);
    }
};
//With overloading i.e making the dunctions with same name but different paramenters
/*class Finder{
    int side;
    int area(int r){
        return (3.14*(pow(r,2)));
    }
    int area(int side){
        return (pow(side,2));
    }
    int area(int h,int b){
        return (h*b);
    }
};*/