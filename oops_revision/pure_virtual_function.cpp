#include<iostream>
using namespace std;

class Base{
    public:
        virtual void display()=0;
};

class Derived1 : public Base{
    public:
        int sum = 0;
        void display(){
            cout<<"SUM: "<<sum<<endl;
        }

        void add(int a, int b){
            sum = a+b;
        }
};

int main(){
    // Base b1;
    // b1.display();

    Derived1 d1;
    d1.add(3,4);
    d1.display();
}