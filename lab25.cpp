/*Demonstrate RTP Covariance by creating a Vehicle type in ServiceCenter class.*/

#include <bits/stdc++.h>
#include "RTPcovarianceLab25.h"
using namespace std;
int main(){
    serviceCenter* csc = new carServiceCenter;
    serviceCenter* bsc = new bikeServiceCenter;
    vehicle* csv = csc->getService();
    vehicle* bsv = bsc->getService();
    cout<<"Car service center provides ";
    csv->getServiceType();
    cout<<"Bike service center provides ";
    bsv->getServiceType();
    return 0;
}