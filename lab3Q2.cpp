/*Write a menu driven code using switch-case to find area of 
1.Circle
2.Square
3.Rectangle
4.Triangle*/

//declaring header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //taking case input to know which operation is to be performed
    int inputCase;
    cin>>inputCase;
    //switch case
    switch(inputCase){
        case 1:
            //defining parameters
            float r;
            float AreaOfCircle;
            //taking radius as input
            cin>>r;
            //caculating area
            AreaOfCircle = 2*M_PI*pow(r,2);
            //showing output
            cout<<"Area of Circle with given radius is: "<<AreaOfCircle<<endl;
            break;
        case 2:
            //defining parameters
            float side;
            float AreaOfSquare; 
            //taking side of square as input
            cin>>side;
            //caculating area
            AreaOfSquare = pow(side,2);
            //showing output
            cout<<"Area of Square with given side is: "<<AreaOfSquare<<endl;
            break;
        case 3:
            //defining parameters
            float h,b;
            float AreaOfRectangle;
            //taking sides of reactangle as input
            cin>>h>>b;
            //caculating area
            AreaOfRectangle = h*b;
            //showing output
            cout<<"Area of Rectangle with given sides is: "<<AreaOfRectangle<<endl;
            break;
        case 4:
            ////defining parameters
            float height,base;
            float AreaOfTriangle;
            //taking height and base of reactangle as input
            cin>>height>>base;
            //caculating area
            AreaOfTriangle = (height*base)/2;
            //showing output
            cout<<"Area of Triangle with given height and base is: "<<AreaOfTriangle<<endl;
            break;
        default:
            cout<<"Not Valid"<<endl;
            break;
    }
    return 0;
}