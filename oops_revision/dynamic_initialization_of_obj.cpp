#include<iostream>
using namespace std;

class A{
    public:
        int v1, v2;

        void display(){
            cout<<"Hello Jatin !!";
        }   
        A(){
            cout<<"Constructor called\n";
        }

        A(A &obj){
            this->v1 = obj.v1;
            this->v2 = obj.v2;
            cout<<"copy\n";
        }
    
};

int main(){
    A* o1 = new A();

}