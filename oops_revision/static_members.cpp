#include<iostream>
using namespace std;

class A{
    public:
        int y;
        static int a;

        static void sum(int a, int b);
    
    A(){
        a++;
    }
};

int A::a=0;

// static members can't access non-static members.

void A :: sum(int a, int b){
    int x = A::a;
    cout<<x<<endl;
}

int main(){
    A o1, o2,o3;
    

    cout<< A::a<<endl;
    A::sum(4,5);
}