/*Demonstrate the usage of default and parameterized constructors for Employee class.*/

//including the header file
#include <bits/stdc++.h>
using namespace std;
//making class for employee
class Employee{
    //making variables public
    public:
        //initializing the parameters
        int id;
        string name;
        int basicSalary;
        float hra;
        float da;
        float ta;
        int salary;
        //default Constructor
        Employee(){
            id = 21324;
            name = "Sonam";
            basicSalary = 25000;
            hra = 0.18;
            da = 0.07;
            ta = 0.03;
            salary = (hra)*(basicSalary) + (da)*(basicSalary) + (ta)*(basicSalary);
        }
        //parameterized Constructor
        Employee(int id,string name,int basicSalary,float hra,float da,float ta,int salary){
            id = 21324;
            name = "Sonam";
            basicSalary = 25000;
            hra = 0.18;
            da = 0.07;
            ta = 0.03;
            salary = (hra)*(basicSalary) + (da)*(basicSalary) + (ta)*(basicSalary);
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