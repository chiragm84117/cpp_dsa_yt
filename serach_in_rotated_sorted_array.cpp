#include<iostream>

using namespace std;

int pivot(int a[],int n){
    int s=0;
    int l=n-1;
    int mid=s+(l-s)/2;
    while(s<l){
        if(a[mid>=a[0]]){
            s=mid+1;
        }
        else{
            l=mid;
        }
        mid=s+(l-s)/2;
    }
    return s;
}

int binarySearch(int a[],int s,int l,int key){
    int mid=s+(l-s)/2;
    while(s<=l){
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            s=mid+1;
        }
        else{
            l=mid-1;
        }
        mid=s+(l-s)/2;
    }
    return -1;
}

int search(int a[],int n,int key){
    int p=pivot(a,n);
    if(key>=a[p] && key<=a[n-1]){
        return binarySearch(a,p,n-1,key);
    }
    else{
        return binarySearch(a,0,p,key);
    }
}

int main(){
    int a[10]={8,10,17,1,2};
    int n=5;
    int key;
    cin>>key;
    cout<<search(a,n,key);
}