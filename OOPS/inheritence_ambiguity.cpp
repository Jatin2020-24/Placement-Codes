#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho??"<<endl;
        }
};

class Derived: public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();
        }
};

int main(){
    Derived o1;
    o1.greet();
    int x = gcd(2,3);
    int y = lcm(3,5);
}