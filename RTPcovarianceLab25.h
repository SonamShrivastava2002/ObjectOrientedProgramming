#include <bits/stdc++.h>
using namespace std;
//parent class
class vehicle{
    public:
        virtual void getServiceType(){
            cout<<"Regular Servicing"<<endl;
        }
};
//derived classes
class car : public vehicle{
    public: 
        void getServiceType() override{
            cout<<"Car Servicing"<<endl;
        }
};
class bike : public vehicle{
    public:
        void getServiceType() override{
            cout<<"Bike serivicing"<<endl;
        }
};
//new class 
//covariance in rtp
class serviceCenter{
    public:
        //covariance in return type
        virtual vehicle* getService(){
            return new vehicle;
        }
};
class carServiceCenter : public serviceCenter{
    public:
        car* getService() override{
            return new car;
        }
};
class bikeServiceCenter : public serviceCenter{
    public:
        bike* getService() override{
            return new bike;
        }
};