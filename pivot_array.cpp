#include<iostream>
using namespace std;

int pivot(int a[],int n){
    int s=0;
    int l=n-1;
    int mid=s+(l-s)/2;
    while(s<l){
        if(a[mid]>=a[mid-1]){
            s=mid+1;
        }
        else{
            l=mid;
        }
        mid=s+(l-s)/2;
    }
    return s;
}
int main(){
   int a[10]={8,10,17,1,3};
   int n=5;
   cout<<pivot(a,n); 
}