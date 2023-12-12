//header files
#include <bits/stdc++.h>
using namespace std;

//voter class
class voter{
    private:
        string name;
        string party;
        int votes;
    public:
        //print function
        void print(){
            cout<<endl;
            cout<<"Printing details of the candidate"<<endl;
            cout<<endl;
            cout<<"Name of the candidate: "<<this->name<<endl;
            cout<<endl;
            cout<<"Party of the candidate: "<<this->party<<endl;
            cout<<endl;
            cout<<"Votes of the candidate: "<<this->votes<<endl;
            cout<<endl;
        }
        //default constructor
        voter(){
            this->name = name;
            this->party = party;
            this->votes = votes;
        }
        //parameterized constructor
        voter(string str1,string str2,int num1){
            this->name = str1;
            this->party = str2;
            this->votes = num1;
        }
        //getters
        string getName(){
            return name;
        }
        string getParty(){
            return party;
        }
        int getVotes(){
            return votes;
        }
        //setters
        void setName(string name){
            this->name = name;
        }
        void setParty(string party){
            this->party = party;
        }
        void setVotes(int votes){
            this->votes = votes;
        }
};