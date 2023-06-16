#include<iostream>
using namespace std;

void merge(int a[],int b[],int n,int m){
    int c[10];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    // if b[] get fully used but a[] have some value let or visevesa

    while(i<n){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k] = b[j];
        k++;
        j++;
    }

    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }

}

int main(){
    int a[10]={1,3,5,7,9};
    int b[10]={2,4,6};
    int n=5;
    int m=3;
    merge(a,b,n,m);
}