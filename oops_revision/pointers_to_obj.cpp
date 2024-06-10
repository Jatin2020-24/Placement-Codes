#include<iostream>
using namespace std;

class A{
    int data;

    public:
        void setData(int x){
            this->data = x;
        }
        void display(){
            cout<<"Data "<<this->data<<endl;
        }
};

int main(){
    /*
        A o1;
        A *ptr = &o1;
    */
    
    A *p = new A;
    p->setData(3);
    p->display();

    (*p).setData(6);
    (*p).display();
}