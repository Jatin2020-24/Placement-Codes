#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base class constructor called\n";
        }
        virtual void display(){
            cout<<"Displaying Base class\n";
        }
};

class Derived : public Base{
    public:
        Derived(){
            cout<<"Derived class constructor called\n";
        }
        virtual void display(){
             cout<<"Displaying Derived class\n";
        }

};

int main(){
    Base * ptr;
    Derived d1;

    ptr = &d1;

    ptr->display();
}