#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        // int value = this-> data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

bool isCurcular(Node* head){
    if(head == head->next){
        return true;
    }

    Node* temp = head->next;
    while(temp!=head && temp!=NULL){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}


int main(){

}