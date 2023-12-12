#include <bits/stdc++.h>
using namespace std;
class shape{
    public:
        int sides;
        int angle;
        void print(){
            cout<<"total sides in the given shape is:"<<sides<<endl;
            cout<<"The angle between any two sides are:"<<angle<<endl;
        }
};
class square{
    public:
        int x;
        int y;
        void print(){
            cout<<"the side x is:"<<x<<endl;
            cout<<"the side y is:"<<y<<endl;
        }
};
class rectangle : public shape,public square{

};