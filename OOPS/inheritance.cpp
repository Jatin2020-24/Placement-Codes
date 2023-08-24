#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;

    protected:
        int age;
    
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
        string color;
        int data = 2;
    
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
    void setHeight();
    int getData1();
};

void Male :: setHeight(void){
    color = "Red";
    data = 55;
}

int Male :: getData1(){
    return data;
}

int main(){
    Male o1;
    o1.setWeight(101);

    // cout<<o1.age<<endl;
    cout<<o1.weight<<endl;
    cout<<o1.height<<endl;

    cout<<o1.color<<endl;

    return 0;
}