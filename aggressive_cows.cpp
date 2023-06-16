#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int a[],int n,int m ,int mid){
    int cowCount=1;
    int lastPos=a[0];
    for(int i=0;i<n;i++){
        if(a[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==m){
                return true;
            }
            lastPos=a[i];

        }
    } 
    return false;
}


int aggressive(int a[],int n,int m){
    // sort(a[0],a[n-1]);
    // code for sorting array
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    int s=0;
    int maxi =-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(a,n,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int a[10]={4,2,1,3,6};
    int n=5;
    int m=2;
    cout<<aggressive(a,n,m);
}