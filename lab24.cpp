/*Demonstrate RTP by checking Parent and Child IS-A relation using Polymorphic References.*/

#include <bits/stdc++.h>
#include "RTPlab24.h"
using namespace std;
int main(){
    child ch;
    parent p;
    p.name = "Mother";
    p.print();
    cout<<endl;
    ch.print();
    return 0;
}