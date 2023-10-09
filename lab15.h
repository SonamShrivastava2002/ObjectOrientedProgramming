//including header file
#include <bits/stdc++.h>
#include "lab14Address.h"
using namespace std;
//class Student
class Student{
    public:
    //initializing variables
    string id;
    string name;
    int percentage;
    char grade;
    Address address;
    //printing details
    void printStudent(){
        cout<<"Student id:"<<id<<endl;
        cout<<"Student name:"<<name<<endl;
        cout<<"Student percentage:"<<percentage<<endl;
        cout<<"Student grade:"<<grade<<endl;
        cout<<"Student's Address:";
        //calling print address to print the address
        address.printAddress();
    }
    //getters for all variables
    string getID(){
        return id;
    }
    string getName(){
        return name;
    }
    int getPercentage(){
        return percentage;
    }
    char getGrade(){
        return grade;
    }
    Address getAddress(){
        return address;
    }
    //setters
    void setId(string idStudent){
        id = idStudent;
    }
    void setName(string nameStudent){
        name = nameStudent;
    }
    void setPercentage(int percentageStudent){
        percentage = percentageStudent;
    }
    void setGrade(char gradeStudent){
        grade = gradeStudent;
    }
    void setAddress(Address addressStudent){
        address = addressStudent;
    }
};