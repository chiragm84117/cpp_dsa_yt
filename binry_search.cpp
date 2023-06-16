#include<iostream>
using namespace std;

int bin_ser(int a[],int n,int key){
    int f=0;
    int l=n-1; 
    // int mid=(f+l)/2;  can use this but this will not work for max int values
    // so we will use 
    int mid=f+(l-f)/2;
    while(f<=l){
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
        mid=f+(l-f)/2;
    }
    return -1;
}

int main(){
    int a[10]={3,6,9,11,15,26,29,35,38,50};
    int key;
    cin>>key;
    cout<<bin_ser(a,10,key)+1;
}