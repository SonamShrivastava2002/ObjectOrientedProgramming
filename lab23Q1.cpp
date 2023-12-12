/*Assume the hierarchy – Rectangle inherits from two parents, Shape and a Square. Address the 
ambiguity member variables.*/

#include <bits/stdc++.h>
#include "hierarchyLab23Q1.h"
using namespace std;
int main(){
    rectangle obj;
    obj.x = 3;
    obj.y = 6;
    obj.angle = 90;
    obj.sides = 4;
    //to avoid ambiguity
    obj.shape :: print();
    obj.square :: print();
    return 0;
}