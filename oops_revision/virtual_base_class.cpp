#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"Maths "<<maths<<endl;
            cout<<"Physics "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }  
        void print_score(){
            cout<<"PT score "<<score<<endl; 
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = physics + maths + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score";
        }
};

int main(){
    Result jatin;
    jatin.set_number(47);
    jatin.set_marks(94.6, 93.9);
    jatin.set_score(9);
    jatin.display();

    return 0;
}