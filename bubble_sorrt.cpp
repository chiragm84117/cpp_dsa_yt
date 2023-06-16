#include<iostream>
using namespace std;

int bubble_sort(int a[],int n){
    
    for(int i=1;i<n;i++){  //this is from no of rounds;
    bool swapp=false;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapp=true;
            }
        }
        if(swapp==false){
            break;
        }
    }

}

int main(){
    int a[10]={10,1,7,6,14,9};
    int n=6;

    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}