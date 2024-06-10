#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int secret = 1123;
    
    public:
        friend class B;
};

class B{
    public:
        void display(A obj){
            cout<<obj.secret<<endl;
        }
};

int main(){
    A o1;
    B oo1;

    oo1.display(o1);
}