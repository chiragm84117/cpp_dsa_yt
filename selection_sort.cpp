#include<iostream>
using namespace std;

// int selection_sort(int a[],int n ){

//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(a[minIndex],a[i]);
//     }
// }

int selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n-1;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        swap(a[min],a[i]);
    }
}

int main(){
    int a[10]={64,25,12,22,11};
    int n=5;
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}