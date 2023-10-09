/*prime from 1-1000*/

//inclusing header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //to keep check of prime or not
    bool flag = true;
    //loop from 2 to 1000
    for(int i=2;i<=1000;i++){
        flag = true;
        //loop for checking the prime
        for(int j=2;j<=i/2;j++){
            //condition for checking the prime
            if(i%j == 0){
                flag = false;
            }    
        }
        //if flag is true the number is prime
        if(flag == true){
            //to find the sum
            int sum = 0;
            int temp = i;
            while(temp > 0){
                sum += temp%10;
                temp = temp/10;
            }
            //printing the sum
            cout<<"Prime number: "<<i<<",Sum of digit: "<<sum<<endl;
        }
    }
    return 0;
}