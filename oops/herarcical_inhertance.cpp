#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"inside fun1"<<endl;
    }
};

class b:public A{
    public:
    void func2(){
        cout<<"inside fun2"<<endl;
    }
};

class c:public A{
    public:
    void func3(){
        cout<<"inside fun3"<<endl;
    }
};

int main(){
    A obj1;
    obj1.func1();

    b obj2;
    obj2.func1();
    obj2.func2();

    c obj3;
    obj3.func1();
    obj3.func3();



}