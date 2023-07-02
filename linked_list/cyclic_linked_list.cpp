#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        // int value = this-> data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void deleteNode(node* &tail,int element){
    if(tail == NULL){
        cout<<"list is emptp pele se"<<endl;
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node linked list
        if(curr == prev){
            tail=NULL;
        }

        // >=2 node linked list
        if(curr == tail){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void Insert(node* &tail,int element,int d){
    // assume the element of give in present

    if(tail == NULL){ //EMPTY LIST
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else{
            // non empty list
        node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }
    // element found

    node* temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;

    }

}

void print(node* tail){
    node* temp =tail;

    if(tail == NULL){
        cout<<"list is empty"<<endl;
    }
    // yadi ek hi element hoga to yeh print nhi kregaa 
    // while(tail->next !=temp){
    //     cout<<tail->data<<" ";
    //     tail =tail->next;
    // }
    // cout<<" ";

    do{
        cout<< tail->data<<" ";
        tail = tail->next;

    }while(tail!=temp);
        cout<<endl;
}

int main(){
    node* tail = NULL;
    Insert(tail,5,3);
    print(tail);
    Insert(tail,3,4);
    print(tail);
    Insert(tail,4,7);
    print(tail);
    Insert(tail,7,9);
    print(tail);
    Insert(tail,3,1);
    print(tail);
    deleteNode(tail,7);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    deleteNode(tail,4 );
    print(tail);


}