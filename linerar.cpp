#include<iostream>
using namespace std;


int main(){
    int n;
    int a[10]={5,6,3,2,1,4,2,4,2,3};
    cin>>n;
    bool flag=0;
    for(int i=0;i<10;i++){
        if(a[i]==n){
            cout<<"found at index "<< i<<endl;
        }
    }
    
}