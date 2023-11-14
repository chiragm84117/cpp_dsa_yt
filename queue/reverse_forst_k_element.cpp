#include<iostream>
#include<queue>
#include<stack>

using namespace std;

queue<int> modify(queue<int> a , int k){
    stack<int> s;
    // step 1
    for(int i=0;i<k;i++){
        int element = a.front();
        s.push(element);
        a.pop();
    }
    // step 2
    for(int i=0;i<k;i++){
        int element=s.top();
        a.push(element);
        s.pop();
    }
    //  step 3
    int t = a.size()-k;
    for(int i=0;i<t;i++){
        int element = a.front();
        a.pop();
        a.push(element);
    }
    return a;
}

int main(){

}