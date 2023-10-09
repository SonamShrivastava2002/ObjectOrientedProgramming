/*Print the first 100 prime numbers along with their count*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //initializing variable
    bool flag = true;
    //loop from 2 to 100
    int cnt = 1;
    for(int i=2;i<=100;i++){
        //loop from 2 to i/2 as non prime number will be divisible only from the numbers before half of it
        for(int j=2;j<=(i/2);j++){
            //checking for divisibility criteria
            if(i%j == 0){
                flag = false;
            }
        }
        //printing the prime number
        if(flag){
            cout<<"("<<i<<","<<cnt<<")"<<" ";
            cnt++;    
        }
        flag = true;
    }
    return 0;
}