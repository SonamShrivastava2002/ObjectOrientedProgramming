#include <bits/stdc++.h>
#include "course.h"
using namespace std;

int main(){
    cout<<endl;
    course student1;
    student1.id = "B21324";
    student1.name = "Sonam Shrivastava";
    student1.credits = 20;
    student1.print();

    cout<<endl;

    MandatoryCourse student2;
    student2.credits = 20;
    student2.creditsMandatoryCourses = 14;
    student2.mandatoryCourses = 5;
    student2.print();

    cout<<endl;

    ElectiveCourse student3;
    student3.credits = 20;
    student3.creditsElectiveCourses = 6;
    student3.electiveCourses = 2;
    student3.print();

    cout<<endl;

    NewCourse student4;
    student4.creditsMandatoryCourses = student2.creditsMandatoryCourses;
    student4.creditsElectiveCourses = student3.creditsElectiveCourses;
    
    student4.electiveCourses = 2;
    student4.mandatoryCourses = 5;
    //using scope resolution
    student4.ElectiveCourse :: print();
    cout<<endl;
    student4.MandatoryCourse :: print();
    cout<<endl;
    return 0;
}