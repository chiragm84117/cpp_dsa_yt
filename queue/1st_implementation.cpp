#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(9);
    q.push(12);;
    cout<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.size()<<endl;

    if(q.empty()){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}