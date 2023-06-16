#include<iostream>
using namespace std;

int first_occ(int a[],int n,int key){
    int start=0;
    int last=n-1;
    int mid= start + (last-start)/2;
    int ans=-1; 
    while(start<=last){
        if(a[mid]==key){
            ans=mid;
            last=mid-1;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            last=mid-1;
        }
        mid= start + (last-start)/2;
    }
    return ans;
}

int last_occ(int a[],int n,int key){
    int start=0;
    int last=n-1;
    int mid= start + (last-start)/2;
    int ans=-1;
    while(start<=last){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            last=mid-1;
        }
        mid= start + (last-start)/2;
    }
    return ans;
}

int main(){
    int a[10]={0,1,1,2,2,2,3,3,4,5};
    int n=10;
    int key;
    cin>>key;
    cout<<"first occurance is "<<first_occ(a,n,key)<<endl;
    cout<<"last occurance is "<<last_occ(a,n,key);
}

