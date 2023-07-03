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

Node* usnique(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;

    while(curr!=NULL){
        if(curr->data == curr->next->data && curr->next != NULL){
            Node* toDelete = curr->next;
            curr->next = curr->next->next;
            delete(toDelete);
        }
        else{
            //not equal

            curr = curr->next;
        }
    }
}

int main(){

}