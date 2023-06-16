#include<iostream>
using namespace std;

bool isPossible(int a[],int n,int m,int mid){
    int studentCount=1;
    int noPage=0;

    for(int i=0;i<n;i++){
        if(noPage + a[i]<=mid){
            noPage+=a[i];
        }
        else{
            studentCount++;
            if(studentCount>m || a[i]>mid){
                return false;
            }
            noPage=a[i];
        }
    }
    return true;
}

int main(){
    int a[10]={12,34,67,90};
    int n=4;
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int m=2;
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(a,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<< ans;
}