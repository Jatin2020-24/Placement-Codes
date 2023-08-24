#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int x,y;
    public:
        A(){ 
            cout<<"Hello"<<endl;
        }

        // Parameterized Constructor
        A(int a, int b){
            this->x = a; this->y=b;
        }

        // Copy constructor
        A(const A& other){
            this->x = other.x;
            this->y = other.y;
        }

        ~A(){
            cout<<"Destructor called"<<endl;
        }
};
int main(){
    A o2(2,3);
    A o3 = o2;
    A o4(o2);
}