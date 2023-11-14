#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(,stack<int>& stack,int element){
    if(stack.empty()){
        stack.push(element);
    }
    int num = s.top();
    s.pop();

    insertAtBottom(stack,element);
    s.push(num);
}

void reverse(stack<int>& stack){
    if(stack.empty()){
        return;
    }

    int num = stack.top;
    stack.pop();

    reverse(stack);
    insertAtBottom(stack,num);
}

int main(){

}