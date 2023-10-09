//2. use a static int count field and increment it as a new object is created

//including the header file
#include <bits/stdc++.h>
using namespace std;
//making class for employee
class Employee{
    private:
        //initializing the parameters
        int id;
        string name;
        int basicSalary;
        float hra;
        float da;
        float ta;
    public:
        int salary;
        static int count;
        //constructor for count to initialize it with 0
        Employee(){
            id = 0;
            name = "";
            basicSalary = 0;
            hra = 0;
            da = 0;
            ta = 0;
            salary = 0;
            count = 0;
        }
        //function to increment the count as we create a new object
        Employee(int id,string name,int basicSalary,float hra,float da,float ta){
            this -> id = id;
            this -> name = name;
            this -> basicSalary = basicSalary;
            this -> hra = hra;
            this -> da = da;
            this -> ta = ta;
            this -> salary = salary;
            count++;
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
            cout<<"Number of Employee: "<<count<<endl;
        }  
        //function to calculate the final Salary
        int calculateSalary(Employee e){
            e.salary = (e.hra)*(e.basicSalary) + (e.da)*(e.basicSalary) + (e.ta)*(e.basicSalary);
            return e.salary;
        }
};