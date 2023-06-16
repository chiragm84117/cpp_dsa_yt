#include<iostream>
using namespace std;

bool isPossile(int a[],int n,int m,int mid){
    int painterCount = 1;
    int no_paint = 0;
    for(int i=0;i<n;i++){
        if(no_paint+a[i]<=mid){
            no_paint+=a[i];
        }
        else{
            painterCount++;
            if(painterCount > m || a[i]>mid){
                return false;
            }
            no_paint = a[i];
        }
    }
    return true;
}

int main(){
    int sum =0 ;
    int ans=0;
    int n=4;
    int m=2;
    int s=0;
    int a[10]={5,5,5,5};
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    int l = sum;
    int mid = s + (l-s)/2;
    while(s<=l){
        if(isPossile(a,n,m,mid)){
            ans = mid;
            l = mid-1;
        }
        else{
            s= mid+1;
        }
        mid = s + (s-l)/2;
    }
    cout<<ans;
}