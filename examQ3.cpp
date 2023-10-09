/*reverse a number*/

//inclusing header file
#include <bits/stdc++.h>
using namespace std;
//function to reverse the number
string reverse(int num){
    //to store the reverse of a number we used string here because if there is zero at last 
    //we cannot store it in int.
    string s = "";
    //loop while the original number is not zero
    while(num>0){
        //to store remainder
        int temp = num%10;
        //updating the number
        num = num/10;
        //to store zero
        if(temp == 0){
            s = to_string(temp);
        }
        else{
            s.push_back(temp + '0');
        }
    }
    //returning the answer
    return s;
}
//main function
int main(){
    //input from user
    int num;
    cin>>num;
    //calling the function and storing the answer in variable answer
    string answer = reverse(num);
    //printing the answer
    cout<<answer<<endl;
    return 0;
}