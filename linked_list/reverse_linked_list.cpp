#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void InsertHead(node* &Head,int d){
    node* temp = new node(d);
    temp->next = Head;
    Head = temp;
} 

node* reverse(node* head){
// itreative
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
    }
    return prev;

}

void reverseRec(node* &head,node* curr, node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }

    node* forward = curr->next;
    reverseRec(head,forward,curr); 
    curr->next = prev;
}

node* reverseRec1(node* head){
     if(head == NULL || head->next == NULL){
        return head;
     }

    node* chotaHead = reverseRec1(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotaHead;
      
}


node* reverse(node* head){
    // node* curr = head;
    // node* prev = NULL;
    // // reverseRec(head,curr,prev);
    return(reverseRec1(head));
}

// void print(node* &head){
//     node* temp =head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

int main(){
    node* node1 = new node(10);
    node* head = node1;
    InsertHead(head,12);
    InsertHead(head,30);
    node *prev = reverse(head);

}