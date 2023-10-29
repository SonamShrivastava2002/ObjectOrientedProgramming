#include <bits/stdc++.h>
using namespace std;
//parent class
class human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
            return this -> age;
        }
        int setWeight(int w){
            this -> weight = w;
        }
};
//inherited class
class male : public human{
    public:
        string color;
        void sleep(){
            cout<<"Duration of sleep"<<endl;
        }
};
int main(){
    male person1;
    cout<<person1.age<<endl;
    cout<<person1.weight<<endl;
    cout<<person1.height <<endl;
    cout<<person1.color<<endl;
    person1.sleep();
    person1.setWeight(50);
    cout<<person1.weight<<endl; 
}