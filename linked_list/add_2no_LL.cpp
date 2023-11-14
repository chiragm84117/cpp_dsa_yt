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
Node* reverse(Node* head){
// itreative
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
    }
    return prev;

}

void insertatTail(Node* &head,Node* &tail,int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

Node* add(Node* first,Node* second){
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry=0;
    while(first!=NULL || second!=NULL || carry!=0){

        int val1=0;
        if(first!=NULL){
            val1 = first->data;
        }

        int val2=0;
        if(first!=NULL){
            val2 = second->data;
        }

        int sum = carry+val1+val2;
        int digit = sum%10;
        insertatTail(ansHead,ansTail,digit);
        carry = sum/10;
        if(first!=NULL){
            first=first->next;
        }
        if (second!=NULL){
            second=second->next;
        }
        {
            /* code */
        }
        
    }

  
    return ansHead;
}


Node* addNo(Node* first, Node* second){
    first = reverse(first);
    second = reverse(second);

    // add the 
    Node* ans = add(first,second);
    ans=reverse(ans);
    return ans;
}


int main(){

}