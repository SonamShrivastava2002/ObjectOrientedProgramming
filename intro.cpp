#include <bits/stdc++.h>
using namespace std;

class hero{
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    void print(){
        cout<<"health:"<<health<<","<<"level:"<<level<<","<<"Name:"<<name<<endl;
    }

    //constructor
    hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    //parameterized constructor
    hero(int health){
        this -> health = health;
    }
    hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    // hero(hero &temp){
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

    //getter & setter

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this -> name,name);
    }

    static int random(){
        return timeToComplete;
    }

    ~hero(){
        cout<<"Destructor Called"<<endl;
    }
};
int hero :: timeToComplete = 5;
int main(){
    //static keyword
    cout<<hero::timeToComplete<<endl;
    cout<<hero::random()<<endl;
    
    // //static
    // hero a;
    // //dynamic
    // hero *b = new hero();
    // //manually called destructor
    // delete(b);

    // hero h;
    // h.setHealth(19);
    // h.setLevel('r');
    // char name[6] = "Sonam";
    // h.setName(name);
    // //h.print();

    // //using default copy constructor
    // hero h1(h);
    // h1.print();
    // h.name[1] = 'a';
    // h.print();
    // //h1.print();

    // //copy assignment operator
    // h = h1;
    // h.print();
    // h1.print();

    // //static allocation
    // hero a(30,'c');
    // a.print();

    // //copy contructor
    // hero b(a);
    // b.print();

    //dynamically 
    //hero *b = new hero;
    //b->setHealth(80);
    //b->setLevel('a');
    // cout<<"level is:"<<(*b).level<<endl;
    // cout<<"health is:"<<(*b).getHealth()<<endl;

    // cout<<"level is:"<<b->level<<endl;
    // cout<<"health is:"<<b->getHealth()<<endl; 
    //creation of object
//     hero xyz;
//     cout<<"Size of xyz:"<<sizeof(xyz)<<endl;
//     cout<<"xyz's health is:"<<xyz.getHealth()<<endl;
    
//     //using setter
//     xyz.setHealth(80);
//     xyz.level = 'a';

//     cout<<"xyz's health is:"<<xyz.getHealth()<<endl;
//     cout<<"xyz's level is:"<<xyz.level<<endl;
}