/*Create a class Student having id, name, percentage, grade as data members along with 
printStudent( ) function. Implement encapsulation using getters and setters. Accept the values 
of id, name and percentage from the user and then find the grade and use setGrade to set the 
grade. Print the details thereafter.
Note:- Accept the values of id, name and percentage only from the user.
*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//class Student
class Student{
    public:
    string id;
    string name;
    int percentage;
    char grade;
    void printStudent(){
        cout<<"Student id:"<<id<<endl;
        cout<<"Student name:"<<name<<endl;
        cout<<"Student percentage:"<<percentage<<endl;
        cout<<"Student grade:"<<grade<<endl;
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
};