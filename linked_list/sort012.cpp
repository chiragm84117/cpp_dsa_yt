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


// when daata replacmentis allowed
Node* sortlist(Node* head){
    int zeroCNT=0;
    int oneCNT=0;
    int twoCNT=0;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0)
            zeroCNT++;
        else if(temp->data==1)
            oneCNT++;
        else if(temp->data==2)
            twoCNT++;

        temp=temp->next;
    }

    temp = head;
    while(temp!=NULL){
        if(zeroCNT != 0){
            temp->data = 0;
            zeroCNT--;
        }
        else if(oneCNT!=0){
            temp->data = 1;
            oneCNT--;
        }
        else if(twoCNT!=0){
            temp->data=2;
            twoCNT--;
        }
    temp=temp->next;
    }

    return head;
}

// when data repeacment is not allowed

void insertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail=curr;
}

Node* sort(Node* head){
    Node* zeroHEAD = new Node(-1);
    Node* zeroTAIL = zeroHEAD;
    Node* oneHEAD = new Node(-1);
    Node* oneTAIL = oneHEAD;
    Node* twoHEAD = new Node(-1);
    Node* twoTAIL = twoHEAD;

    Node* curr = head;

    while(curr != NULL){
        int value = curr->data;

        if(value==0 ){
            insertAtTail(zeroTAIL,curr);
        }
        else if (value==1){
            insertAtTail(oneTAIL,curr);
        }
        else if (value==2){
            insertAtTail(twoTAIL,curr);
        }
        curr = curr->next;
    }
    // yaha tak seprate list ban gyi
    // abh merge krdoo      note dekhta waha dumy node bih h

    // merge start here

    if(oneHEAD->next!=NULL){//for not empty
        zeroTAIL->next = oneHEAD->next;
    }
    else{
        //for empty
        zeroTAIL->next = oneHEAD->next;
    }
    oneTAIL->next = twoHEAD->next;
    twoTAIL->next=NULL;

    head = zeroHEAD->next;

    // delete dummy element
    delete zeroHEAD;
    delete twoHEAD;
    delete oneHEAD;
    
}

int main(){

}