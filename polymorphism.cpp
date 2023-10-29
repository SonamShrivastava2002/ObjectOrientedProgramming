#include <bits/stdc++.h>
using namespace std;

//compile-time polymorphism/static polymorphism

//function overloading
// class A{
//     public:
//         void sayHello(){
//             cout<<"Hello Visual Studio Code"<<endl;
//         }
//         void sayHello(string name){
//             cout<<"Hello"<<name<<endl;
//         }
// };
// //operator overloading
// class B{
//     public:
//         int a;
//         int b;
//     public:
//         int add(){
//             return a+b;
//         }
//         void operator+ (B &obj){
//             int val1 = this -> a;
//             int val2 = obj.a;
//             cout<<"output:"<<(val2 - val1)<<endl;
//         }
//         void operator() (){
//             cout<<"Bracket operator overloaded "<<this -> a<<endl;
//         }
// };
// int main(){
//     // A obj;
//     // obj.sayHello();

//     B obj1,obj2;
//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;

//     obj1();
// }

//run-time polymorphism/dynamic polymorphism

class animal{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};
class dog : public animal{
    public:
        //function overiding
        void speak(){
            cout<<"Barking"<<endl;
        }
};
int main(){
    dog obj;
    obj.speak();
}
