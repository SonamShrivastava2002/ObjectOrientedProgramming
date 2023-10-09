//2. use a static int count field and increment it as a new object is created

//including the header file
#include <bits/stdc++.h>
#include "lab13Q2.h"
using namespace std;
int Employee :: count = 0;
int main(){
    Employee e = Employee(312787,"Sonam",25000,0.18,0.07,0.03);
    e.salary = e.calculateSalary(e);
    e.print();
    return 0;
}