#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>& s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    solve(stack,x);
    s.push(num)
}

stack<int> pushBottom(stack<int>& s,int x){
    solve(s,c);
    return s;
}

int main(){

}