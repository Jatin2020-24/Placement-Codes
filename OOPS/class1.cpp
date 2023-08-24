#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties
    // Empty class has size = 1byte, just for identification !! 

    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Default Constructor called !!\n";
        name = new char[100];
    }

    // Parameterized Constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }

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
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    } 
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::timeToComplete<<endl; 

    // Hero p1;

    // Hero*p2 = new Hero();
    // delete p2;

    // Hero h1;
    // h1.setHealth(12);
    // h1.setLevel('D');
    // char name[6] = "Jatin";
    // h1.setName(name);

    // h1.print();

    // Hero o1(70, 'C');
    // o1.print();

    // // Copy constructor
    // Hero o2(o1);
    // o2.print();

    // // Obj created statically
    // Hero jatin(10);
    // cout<<"Address of jatin: "<<&jatin<<endl;
    // jatin.getHealth();

    // Hero *h = new Hero(11);
    // h->print();

    // Hero a(10, 'B');
    // a.print();


    /*
    // static allocation
    Hero a;
    cout<<"Level is: "<<a.level<<endl;
    cout<<"Health: "<<a.getHealth()<<endl;

    // Dynamic allocation
    Hero *b = new Hero;

    b->setLevel('G');
    b->setHealth(18);

    cout<<"level is: "<<(*b).level<<endl;
    cout<<"health is: "<<(*b).getHealth()<<endl;

    cout<<"level is: "<<b->level<<endl;
    cout<<"health is: "<<b->getHealth()<<endl;

    // creation of object
    Hero jatin;

    jatin.setHealth(1000);
    jatin.level = 'A';

    cout<<"Health is: "<<jatin.getHealth()<<endl;
    cout<<"Level is: "<<jatin.level<<endl;
    */
}