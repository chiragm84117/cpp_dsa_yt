#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    cout<<v.front()<<endl;

    v.push_back(4);
    v.push_back(3);
    v.pop_back();

    for(int i:v){
        cout<<i<<" ";
    }

    v.clear();
// her the size will become 0 but the capasity will be same 

    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
cout<<endl;
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
}