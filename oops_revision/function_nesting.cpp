#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        void sum1(int a, int b);
    public:
        void printSum(int a, int b);
};

void A :: sum1(int a, int b){
    cout<<a+b;
}

void A :: printSum(int a, int b){
    sum1(a,b);
}

int main(){
    A a;
    a.printSum(4,5);
}