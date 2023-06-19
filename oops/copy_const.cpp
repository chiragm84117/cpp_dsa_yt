#include<iostream>
using namespace std;

class Hero{
    private:
        int health;

    public:
        char level;
        Hero(){
            cout<<"constructure call"<<endl;
        }

        // parameter constructure
        Hero(int health){
            this->health = health;
        }

        Hero(int health,char level){
            this->health = health;
            this->level = level;
        }
        // swlf created copy constructur
        Hero(Hero& temp){
            this->health = temp.health;
            this->level = temp.level;

        }

        void print(){
            cout<<this->health<<endl;
            cout<<this->level<<endl;
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
};

int main(){
    Hero chirag(70,'C');

    chirag.print();

    Hero lavish(chirag);  // copieed

    lavish.print();

    

}