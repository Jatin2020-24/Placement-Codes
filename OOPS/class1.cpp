#include<iostream>
using namespace std;

class Hero{
    // properties
    // Empty class has size = 1byte, just for identification !! 

    private:
    int health;

    public:
    char name[100];
    char level;

    void print(){
        cout<<level<<endl;
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
};

int main(){
    // creation of object
    Hero jatin;

    jatin.setHealth(1000);
    jatin.level = 'A';

    cout<<"Health is: "<<jatin.getHealth()<<endl;
    cout<<"Level is: "<<jatin.level<<endl;
}