#include <bits/stdc++.h>
using namespace std;
class parent{
    public:
        string mother;
        string father;
    public:
        void name(){
            cout<<"mother and father"<<endl;
        }
};
class son : public parent{
    public:
        void nameSon(){
            cout<<"Son's name"<<endl;
        }
};
class daughter : public parent{
    public:
        void nameDaughter(){
            cout<<"Daughter's name"<<endl;
        }
};
int main(){
    parent obj1;
    obj1.name();
    son obj2;
    obj2.name();
    obj2.nameSon();
    daughter obj3;
    obj3.name();
    obj3.nameDaughter();
}