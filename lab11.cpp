/*Create a class Student having id, name, percentage, grade as data members along with 
printStudent( ) function. Implement encapsulation using getters and setters. Accept the values 
of id, name and percentage from the user and then find the grade and use setGrade to set the 
grade. Print the details thereafter.
Note:- Accept the values of id, name and percentage only from the user.
*/

//including header file
#include <bits/stdc++.h>
#include "lab11.h"
using namespace std;
int main(){
    //variable student
    Student s;
    //input for name,id and percentage
    cin>>s.name>>s.id>>s.percentage;
    //assigning grade
    if(s.percentage <= 39){
        s.setGrade('D');
    }
    else if(s.percentage <= 50){
        s.setGrade('C');
    }
    else if(s.percentage <= 75){
        s.setGrade('B');
    }
    else{
        s.setGrade('A');
    }
    //printing the details
    s.printStudent();
    return 0;
}