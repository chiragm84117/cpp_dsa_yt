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
        int value = this-> data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertHead(Node* &Head,int d){
    Node* temp = new Node(d);
    temp->next = Head;
    Head = temp;
}

void InsertTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp ;
}

void InsertMiddle(Node* &tail,Node* &head,int position,int d){
    // strating element
    if (position == 1){ //edge case h yeh
        InsertHead(head,d);
    }
    Node* temp = head;
    int cnt =1;
    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp->next == NULL){ //edge case h yeh
        InsertTail(tail,d);
    }
    Node * nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(int position,Node* &head,Node* &tail){
    // at first
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    // at middle and last
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

    

}
 
void print(string s){
    cout<<s<<endl;
}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1-> next<<endl;

    // head at node 1

    Node* head = node1;
    Node* tail = node1;
    print("with one element");
    print(head);
    print("inserting at head");
    InsertHead(head,12);
    print(head);
    InsertHead(head,15);
    print(head);
    print("inserting at tail");
    InsertTail(tail,12);
    print(head);
    InsertTail(tail,15);
    print(head);
    print("inserting at middle");
    InsertMiddle(tail,head,3,19);
    print(head);
    print("deletion start here ");
    deleteNode(1,head,tail);
    print(head);
    deleteNode(3,head,tail);
    print(head);

}