#include<iostream>
using namespace std;

int swapOne(int a[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(a[left]==0 && left<right){
            left++;
        }
        while(a[right]==1 && left<right){
            right--;
        }
        if(a[left]==1 &&a[right]==0 && left<right){
            swap(a[left],a[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[10]={0,1,1,0,1,0,1,0};
    swapOne(a,8);
}