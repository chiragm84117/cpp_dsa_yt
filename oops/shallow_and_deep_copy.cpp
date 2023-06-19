#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    char *name;
    static int TimeToComplete;  // this donot depend on hero or enemy // too acces it no need to pass values

    Hero(){
        cout<<"constructure called"<<endl;
        name = new char[100];
    }

     void print(){
            cout<<this->health<<endl;
            cout<<this->level<<endl;
            cout<<this->name<<endl;
        }
        int getHealth(){
            return health;
        }
        char getLevel(){
            return level;
        }
        void setHealth(int h){
            health = h;
        }
        void setLevel(int ch){
            level = ch;
        }

        void setName(char name[]){
            strcpy(this->name,name);
        }
        static int random(){
            // the statis valiable hi use krega
            return TimeToComplete;
        }

        ~Hero(){
            cout<<"destructure called"<<endl;
        }
};

int Hero::TimeToComplete = 60;

int main(){

    cout<<Hero::TimeToComplete<<endl;   // do not depend on object yeh class se related hota h 

    cout<<Hero::random()<<endl;

    Hero h1;
    h1.setHealth(50);
    h1.level = 'D';
    char name [7] = "chirag";
    h1.setName(name);
    h1.print();

    //  use default constructure
    Hero h2(h1);
    h2.print();

    h1.name[0] = 'l';

    //  shallow copy -- done when default constructure called
    h1.print();
    h2.print();

    // deep copy me pura array copy hoga dusre array me


    //  destructure static ke liye auto call hoga 
    //  destructure dynamic ke liye manually call hoga

    Hero *b = new Hero();
    delete b;
}