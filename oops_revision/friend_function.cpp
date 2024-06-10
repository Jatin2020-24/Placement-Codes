#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int secret = 1122;
    
    public:
        friend void accessSecret(A obj);
};

void accessSecret(A obj){
    cout<<obj.secret<<endl;
}

int main(){
    A o1;
    accessSecret(o1);
}