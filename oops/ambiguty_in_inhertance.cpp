#include<iostream>
using namespace std;

class A{
    public:

    void func(){
        cout<<"i am A"<<endl;
    }
};

class b{
    public:

    void func(){
        cout<<"i am b"<<endl;
    }
};

class c: public A,public b{
    
};

int main(){
    c obj;
    obj.A::func();
    obj.b::func();
}