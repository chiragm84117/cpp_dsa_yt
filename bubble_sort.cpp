#include<iostream>
using namespace std;

int bubble_sort(int a[],int n){
    // swapped is only use for optimization

    bool swapped = false;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
                swapped = true;
        }
        if(swapped == false){
            break;
        }
    }

}

int main(){
    int a[10]={6,2,8,5,1};
    int n=5;
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}