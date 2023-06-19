#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

// multiple inhertance

class hybrid:public Animal,public Human{

};

int main(){
    hybrid h1;
    h1.speak();
    h1.bark();

}