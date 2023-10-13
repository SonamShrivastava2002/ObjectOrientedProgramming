/*Demonstrate the usage of Stack DS.*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//function for reversing a string
string reversed(string inputStr){
    //input stack
    stack<char> s;
    //output string
    string ans = "";
    //loop to traverse the entire input string
    for(auto c:inputStr){
        //pushing each character in stack
        s.push(c);
    }
    //loop for reversing
    while(!s.empty()){
        //fetching the top element
        char ch = s.top();
        //adding it in answer
        ans += ch;
        //removing the top element
        s.pop();
    }
    //returning the output string
    return ans;
}
//main function
int main(){
    string inputStr = "I'm learning Object Oriented Pragramming";
    //before reversing
    cout<<inputStr<<endl;
    //after reversing
    string reversedStr = reversed(inputStr);
    cout<<reversedStr<<endl;
    return 0;
}