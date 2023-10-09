//3. create a copy constructor for employee class

//including the header file
#include <bits/stdc++.h>
using namespace std;
//making class for employee
class Employee{
    private:
        //initializing variables
        int id;
        string name;
        int basicSalary;
        float hra;
        float da;
        float ta;
        int salary;
    //making variables public
    public:
        //copy constructor
        Employee(const Employee &employee){
            id = employee.id;
            name = employee.name;
            basicSalary = employee.basicSalary;
            hra = employee.hra;
            da = employee.da;
            ta = employee.ta;
            salary = employee.salary;
        }
        //fucntion for printing the values
        void print(){
            cout<<"Id of the employee is:"<<id<<endl;
            cout<<"Name of the employee is:"<<name<<endl;
            cout<<"Base Salary of the employee is:"<<basicSalary<<endl;
            cout<<"hra of the company is:"<<hra<<endl;
            cout<<"hra of the company is:"<<da<<endl;
            cout<<"hra of the company is:"<<ta<<endl;
            cout<<"Final Salary of the employee is:"<<salary<<endl;
        }  
        //function to calculate the final Salary
        int calculateSalary(Employee e){
            e.salary = (e.hra)*(e.basicSalary) + (e.da)*(e.basicSalary) + (e.ta)*(e.basicSalary);
            return e.salary;
        }
};