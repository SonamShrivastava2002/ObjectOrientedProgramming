#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
        int age;
        int weight;
    public:
        void voice(){
            cout<<"Sound of animal"<<endl;
        }
};
class human{
    public:
        string color;
    public:
        void speak(){
            cout<<"Someone is speaking"<<endl;
        }
};
//multiple inheritance
class hybrid : public animal,public human{

};
int main(){
    hybrid obj;
    obj.speak();
    obj.voice();
}