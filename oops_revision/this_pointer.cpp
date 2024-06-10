#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // This function returns reference to obj
        A & setData(int a){
            this->a = a;
            return *this; 
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(5).getData();
    a.getData();
}