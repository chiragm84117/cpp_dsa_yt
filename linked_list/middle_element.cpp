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

int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head -> next;
    }
    return len;
}

Node* findMidle(Node* head){
    int len = getLength(head);
    int ans = (len/2);
    Node* temp=NULL;
    int cnt=0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
// optimized
// kafi achi achi implementaion h yeh 
// real life me eese hi kuch algo bana na hotaaa h 
// fast and slow men ke hisab se kroo is koooo 
// sexy approch
Node* findMiddle1(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int main(){

}