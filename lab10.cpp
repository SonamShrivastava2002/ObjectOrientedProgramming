/*1.	Create a class Employee having id, name, basicSalary, hra, da, ta and salary. Write a function to print the details. Write a function to calculate the salary based on following assumptions.
a.	hra = 18% of basicSalary.
b.	da = 7% of basicSalary.
c.	ta = 3% of basicSalary.
Note :- Accept the values of id, name and basicSalary only from the user.*/

//including header file
#include <bits/stdc++.h>
//including class file
#include "lab10Employee.h"
using namespace std;
//main function
int main(){
    //making a variable of employee type
    Employee e;
    //assigning the given values
    e.hra = 0.18;
    e.da = 0.07;
    e.ta = 0.03;
    //taking inputs for name,id,and basic salary
    cin>>e.name>>e.id>>e.basicSalary;
    //calculating the final salary
    int finalSalary = e.calculateSalary(e);
    //assigning the final salary to the varaible employee
    e.salary = finalSalary;
    //printing the details
    e.print();
    //printing the final Salary
    cout<<"Salary of the employee is : "<<finalSalary;
    return 0;
}