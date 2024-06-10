#include<bits/stdc++.h>
using namespace std;

int main(){
    // What is Pointer? -- datatype which holds the address of another datatype 

    int a = 5;

    int* b = &a;

    // & -- (Address of) operator
    // * -- (Value at) Dereference operator


    /*******Pointer to Pointer*************/

    // It stores address of pointer b
    int** c = &b;



    /******Pointer and Arrays*********/

    int marks[5] = {44,55,22,77,88};

    int* p = marks;

    cout<<*p<<endl;
    cout<<*(p+4)<<endl;

    return 0;
}