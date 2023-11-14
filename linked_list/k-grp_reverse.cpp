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


Node* kReverse(Node* head,int k){

if(head==NULL){
    return NULL;
}

Node* prev=NULL;
Node* curr=head;
Node* next=NULL;
int count=0;

while(count<k && curr!=NULL){
    next = curr->next;
    curr -> next = prev;
    prev = curr;
    curr = next;
}

if(next!=NULL){
    head->next = kReverse(next,k);
}

return prev;

}



int main(){

}