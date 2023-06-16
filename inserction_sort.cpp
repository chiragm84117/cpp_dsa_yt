#include<iostream>
using namespace std;

// here we don't swap , we shift.

int insert_sort(int a[],int n){
    for(int i=1;i<n;i++){//no of round
    int temp = a[i];
    int j;
        for(j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
}

int main(){
    int a[10]={10,1,7,4,8,2,11};
    int n=7;
    insert_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}