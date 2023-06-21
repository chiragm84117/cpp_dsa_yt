#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int val1 = this->a;
        int val2 = obj.a;

        cout<<"output "<<val2-val1<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
}