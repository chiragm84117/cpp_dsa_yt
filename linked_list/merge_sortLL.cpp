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


Node* merge(Node* first,Node* second){
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

    
}

int main(){

}