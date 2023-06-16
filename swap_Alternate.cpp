#include<iostream>
using namespace std;

int chage(int a[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(a[i],a[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[9]={1,2,3,4,5,6,7,8,9};
    chage(a,9); 
}