#include<iostream>
#include<map>
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

bool detect(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}


Node* floydDetectLoop(Node* head){
    if(head== NULL){ 
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}

Node* getStartPosition(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startOfLoop = getStartPosition(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){

}