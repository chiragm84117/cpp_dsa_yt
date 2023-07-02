#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this->data = d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~node(){
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLenght(node* head){
    node* temp = head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(node* &head,int d){
    node * temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtMiddle(node* &head,node* &tail,int position,int d){
    if(position ==1){
        insertAtHead(head,d);
        return;
    }

    node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next; 
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


}
void deleteNode(int position,node* &head,node* &tail){
    // at first
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    // at middle and last
    else{
        node* curr = head;
        node* before = NULL;
        int cnt = 1;
        while(cnt<position){
            before = curr;
            curr = curr->next;
            cnt++;
        }
        // curr->next->prev = before->next;
        before->next = curr->next;
        curr->next->prev = curr->prev;
        curr->prev = NULL;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    cout<<getLenght(head)<<endl;
    insertAtHead(head,11);
    print(head);
    node* tail = node1;
    insertAtTail(tail,19);
    print(head);
    insertAtMiddle(head,tail,4,18);
    print(head);
    deleteNode(3 ,head,tail);
    print(head);
}