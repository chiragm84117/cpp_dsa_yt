#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"hello chirag"<<endl;
    }

    void sayHello(string name){
        cout<<"hello "<<name<<endl;
    }
    void sayHello(char name){
        cout<<"hello "<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("lavish");
    obj.sayHello('s');
}