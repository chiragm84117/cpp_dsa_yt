#include<iostream>
using namespace std;

int selection_sort(int a[],int n ){

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        swap(a[minIndex],a[i]);
    }
}

int main(){
    int a[10]={64,25,12,22,11};
    int n=5;
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}