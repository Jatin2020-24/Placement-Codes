#include<bits/stdc++.h>
using namespace std;

int main(){

    // Rohan -> Monty -> Rohu -> Dangerous Coder

    int x = 44;

    /*  
        y is reference variable
        y and x are pointing to same memory location 
    */

    int &y = x;

    y = 67;

    cout<<&x<<endl;
}