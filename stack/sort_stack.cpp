#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> stack,int num){
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    sortedStack(stack,num);
    stack.push(n);
}

void sortStack(stack<int>& stack){
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack,num);
}

int main(){

}