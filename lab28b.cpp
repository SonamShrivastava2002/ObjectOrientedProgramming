/*Demonstrate Template concept by -
Create a class Map which has two template variables, K (key) and V (value)*/

#include <bits/stdc++.h>
#include "mapping.h"
using namespace std;
int main(){
    Map<int,string> map1;
    map1.insert(1,"xyz");
    map1.insert(2,"abc");
    cout<<"getting values"<<endl;
    cout<<map1.print(1)<<endl;
    cout<<map1.print(2)<<endl;
    Map<string,double> map2;
    map2.insert("pi",3.14159265359);
    map2.insert("sqrt(2)",1.41421356237);
    cout<<"getting values"<<endl;
    cout<<map2.print("pi")<<endl;
    cout<<map2.print("sqrt(2)")<<endl;
    return 0;
}