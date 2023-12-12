#include <bits/stdc++.h>
using namespace std;

class course{
    public:
        string id;
        string name;
        int credits;
        void print(){
            cout<<"Student details"<<endl;
            cout<<"ID of student: "<<id<<endl;
            cout<<"Name of student: "<<name<<endl;
            cout<<"Credits of student in current semester: "<<credits<<endl;
        }
};
//derived classes
class MandatoryCourse : public course{
    public:
        int credits = 20;
        int mandatoryCourses;
        int creditsMandatoryCourses;
        void print(){
            cout<<"Mandatory courses taken by the studentt: "<<mandatoryCourses<<endl;
            int temp = credits - creditsMandatoryCourses;
            cout<<"Total credits left after taking mandatory courses are: "<<temp<<endl;
        }
};
class ElectiveCourse : public course{
    public:
        int credits = 20;
        int electiveCourses;
        int creditsElectiveCourses;
        void print(){
            cout<<"Elective courses taken by the student: "<<electiveCourses<<endl;
            cout<<"Total credits left after taking elective courses are: "<<abs(credits - creditsElectiveCourses)<<endl;
        }
};
class NewCourse : public MandatoryCourse,public ElectiveCourse{
    public:
        string code;
        int year;
        int creditsNewcourse;
        bool eligible(){
            if((creditsMandatoryCourses + creditsElectiveCourses + creditsNewcourse) <= 23){
                return true;
            }
            return false;          
        }
        void print(){
            cout<<"Total credits of mandatory and elective courses: "<<(creditsMandatoryCourses + creditsElectiveCourses)<<endl;
            cout<<"Is student eligible for taking new course: "<<eligible()<<endl;
        }
};