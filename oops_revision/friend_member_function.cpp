#include<iostream>
using namespace std;

class A;

class B{
    public:
        void display(A o1, A o2);
};

class A{
    private:
        int a = 4, b = 9;
    public:
        friend void B :: display(A o1, A o2);
};

void B :: display(A o1, A o2){
    cout<<o1.a<<" "<<o2.b<<endl;
}

int main(){
    A o1, o2;
    B obj1;
    obj1.display(o1,o2);
}