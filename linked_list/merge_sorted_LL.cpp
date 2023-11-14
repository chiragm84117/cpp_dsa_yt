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

Node* solve(Node* first,Node* second){

    // if first lit have only one element point its next to second list
    // bcz in while loop if we see next1 NULL nhi ho na cahiye yadi hu to to while me nhi jaye gaa and bas return krega first ka LL (wrong o/p)
    if(first -> next == NULL){
        first->next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;
    while(next1 != NULL && curr2!=NULL){
        if((curr2->data>=curr1->data) && (curr2->data<=next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = curr1->next;
            next1 = next1->next; 

            if(next1 == NULL){
                curr1 ->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* merge(Node* first,Node* second){
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

     if(first->data <= second->data){
        solve(first,second);
     }
     else{
        solve(second,first);
     }
}

int main(){

}