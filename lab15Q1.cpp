//including header file
#include <bits/stdc++.h>
#include "lab15.h"
using namespace std;
int main(){
    Student s[3];
    for(int i=0;i<3;i++){
        Student temp = {"B21324","Sonam",86,'B',{474006,"Gwalior","Madhya Pradesh","xsjixji"}};
        s[i] = temp;
        s[i].printStudent();
        cout<<endl;
    }
}