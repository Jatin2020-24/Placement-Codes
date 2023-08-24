#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Jatin"<<endl;
    }

    void sayHello(string s){
        cout<<"Hello: "<<s<<endl;
    }

    void sayHello(int n){
        cout<<"Hello int"<<endl;
    }
};

class B{
    public:
    int a, b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output: "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Main bracket hu "<<this->a<<endl;
    }
};

int main(){
    // A o1;
    // o1.sayHello();
    // o1.sayHello("Hello");
    // o1.sayHello(12);

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2 ;
    obj1();
}