/*Provide a solution for the same by converting it into a multi-level hierarchy.*/

#include <bits/stdc++.h>
#include "hierarchyLab23Q2.h"
using namespace std;
int main(){
    rectangle obj;
    obj.x = 6;
    obj.y = 6;
    obj.angle = 90;
    obj.sides = 4;
    //to avoid ambiguity
    obj.shape :: print();
    obj.square :: print();
    return 0;
}