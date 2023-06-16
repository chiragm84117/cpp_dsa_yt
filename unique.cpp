#include<iostream>
using namespace std;

int findunique(int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
    }
    cout<<ans;
}
int main(){
    int a[10]={1,3,5,1,3};
    findunique(a,5);
}