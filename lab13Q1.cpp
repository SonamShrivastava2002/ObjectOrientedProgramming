/*1. Demonstrate the usage of static variable for employee class*/

//including the header file
#include <bits/stdc++.h>
#include "lab13Q1.h"
using namespace std;
int Employee :: employeeCount = 0;
int main(){
    Employee e = Employee(312787,"Sonam",25000,0.18,0.07,0.03);
    e.salary = e.calculateSalary(e);
    e.print();
    return 0;
}