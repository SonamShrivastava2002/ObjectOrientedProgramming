#include <bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int age;
        int height;
    public:
        int getAge(){
            return this -> age;
        }
};
int main(){
    student one;
    cout<<one.getAge()<<endl;
}