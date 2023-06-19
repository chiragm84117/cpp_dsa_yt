#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    int extra; 
};

class labra: public Dog{

};

int main(){
    labra d;
    d.speak();
    cout<<d.age<<endl;
    cout<<d.extra<<endl;
}