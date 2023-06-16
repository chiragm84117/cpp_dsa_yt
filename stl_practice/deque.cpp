#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(2);
    d.push_front(3);
    d.push_back(4);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<d.front();
    cout<<endl;

    cout<<d.back();
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout<<i<<" ";
    }

}