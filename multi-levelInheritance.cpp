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
class dog : public animal{
    string breed;
};
class bulldog : public dog{

};
int main(){
    dog d;
    d.voice();
    cout<<d.age<<endl;
    bulldog b;
    b.voice();
}