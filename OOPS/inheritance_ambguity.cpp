#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};

class B{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
 
class C: public A, public B{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main(){
    C o3;
    // o3.func1();
    o3.A::func1();
    o3.B::func1();
}