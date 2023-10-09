/*make a class Student contains id,name,marks as object and print the values of these*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//class Student
class Student{
    //making variables public so can we can use them anywhere in the file
    public:
        //making variables for if,name and marks
        string id;
        string name;
        int marks;
        //function for printing the details
        void printDetails(){
            cout<<"Id of the student id:"<<id<<endl;
            cout<<"Name of the student is:"<<name<<endl;
            cout<<"Marks of the student is:"<<marks<<endl;
        }
};
//main function
int main(){
    //making variable
    Student s;
    //assigning the values for id,name and marks
    s.id = "B21324";
    s.name = "Sonam Shrivastava";
    s.marks = 86;
    //printing the details
    s.printDetails();
    return 0;
}