#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int age;
        int height;

    public:
    int getAge(){
       return age; 
    }
};

int main(){
    student s1;
    cout<<s1.getAge();
}