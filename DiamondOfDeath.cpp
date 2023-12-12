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
        int mandatoryCourses;
        int creditsMandatoryCourses;
        virtual void print(){
            cout<<"Mandatory courses taken by the studentt: "<<mandatoryCourses<<endl;
            int temp = credits - creditsMandatoryCourses;
            cout<<"Total credits left after taking mandatory courses are: "<<temp<<endl;
        }
};
class ElectiveCourse : public course{
    public:
        int electiveCourses;
        int creditsElectiveCourses;
        virtual void print(){
            cout<<"Elective courses taken by the student: "<<electiveCourses<<endl;
            cout<<"Total credits left after taking elective courses are: "<<abs(credits - creditsElectiveCourses)<<endl;
        }
};

//multiple inheritance
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
        void print() override{
            cout<<"Total credits of mandatory and elective courses: "<<(creditsMandatoryCourses + creditsElectiveCourses)<<endl;
            cout<<"Is student eligible for taking new course: "<<eligible()<<endl;
        }
};

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
    student4.print();
    cout<<endl;
    return 0;
}