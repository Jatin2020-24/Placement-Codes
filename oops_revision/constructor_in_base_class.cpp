#include<iostream>
using namespace std;

class Base1{
    int data;

    public:
        Base1(int i){
            data = i;
            cout<<"Base1 class constructor called\n";
        }
        void printDataBase1(){
            cout<<"The value of data is "<<data<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printData(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d) : Base2(a), Base1(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl; 
        }
};

int main(){
    Derived jatin(1,2,3,4);
    jatin.printDataBase1();
}