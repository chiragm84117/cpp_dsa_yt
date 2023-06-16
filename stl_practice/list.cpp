#include<iostream>
#include<list>
using namespace std;
//cannot asses  middle values here;
int main(){
    list<int> l;
    list<int> n(5,200);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(2);
    l.push_front(5);
    l.push_front(6);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<l.size()<<"   "<<n.size();


}