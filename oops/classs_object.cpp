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

        Hero(int health){
            this->health = health;
        }

        Hero(int health,char level){
            this->health = health;
            this->level = level;
        }

        void print(){
            cout<<level<<endl;
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
    Hero ramesh(10);

    cout<<&ramesh<<endl;
    cout<<ramesh.getHealth()<<endl;

    Hero chirag(40,'A');
    cout<<chirag.getHealth()<<endl;
    cout<<chirag.getLevel()<<endl;

    // cout<<ramesh.getHealth()<<endl;
    // ramesh.setHealth(70);
    // ramesh.setLevel('B');
    // cout<<ramesh.getHealth()<<endl;
    // cout<<ramesh.getLevel()<<endl;
    // ramesh.level = 'A';
    // cout<<ramesh.level<<endl;
    // cout<<"-----------------------"<<endl;
    // Hero *b = new Hero;
    // b->setHealth(50);
    // b->level = 'Y'; 
    // cout<<(*b).getHealth()<<endl;
    // cout<<(*b).level<<endl;
    // cout<<"------------------------"<<endl;
    // cout<<b->level<<endl;
    // cout<<b->getHealth()<<endl;

}