#include<iostream>
#include<vector>
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
// approch 2
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev =NULL;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

 bool ispalindrome(Node* head){
    if(head->next == NULL){
        return true;
    }
    Node* middle = getMid(head);
    Node* temp = middle->next;
    middle->next = reverse(temp);


    Node* head1 = head;
    Node* head2 = middle->next;

    while(head2!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // repert krdooo reverse wala part so the wo LL same rahee
    temp = middle->next;
    middle->next = reverse(temp);
    return true;
 }


// approch 1

bool check(vector<int> arr){
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        if(arr[s]!= arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool checkPallandrom1(Node *head){
    vector<int> arr;

    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return check(arr);
}

int main(){

}