#include<iostream>
#include<stack>

using namespace std;

void solver(stack<int>& inputStack,int cnt,int n){
    if(cnt==n/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    solver(inputStack,cnt+1,n);

    inputStack.push(num);
}

void deleteNode(stack<int>&inputStack,int n){
    int cnt=0;
    solve(inputStack,cnt,n);
}


int main(){

}