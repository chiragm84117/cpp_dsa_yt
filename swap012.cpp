#include<iostream>
using namespace std;

int swapOneTwo(int a[],int n){
    int left=0,right=n-1;
    int mid =0;
    while(mid<=right){
        if(a[mid]==0){
            swap(a[mid],a[left]);
            left++;
            mid++;
        }
        else if (a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[right]);
            right--;
        }
    }
    // int mid = left+1;

    // while(left<mid<right){
    //     while(a[left]==0 && left<mid<right){
    //         left++;
    //     }
    //     if(a[left] == 1 && a[mid] == 0 && left<mid<right){
    //         swap(a[left],a[mid]);
    //         left++;
    //         mid++;
    //     }
    //     if(a[left]==2 && a[right]==0 && left<mid<right){
    //         swap(a[left],a[right]);
    //         left++;
    //         right--;
    //     }
    //     while(a[mid]==1 && left<mid<right){
    //         mid++;
    //     }
    //     if(a[mid] == 0 && a[left] == 1 && left<mid<right){
    //         swap(a[left],a[mid]);
    //         left++;
    //         mid++;
    //     }
    //     if(a[mid]==2 && a[right]==1 && left<mid<right){
    //         swap(a[mid],a[right]);
    //         mid++;
    //         right--;
    //     }
    //     while(a[right]==2 && left<mid<right){
    //         right--;
    //     }
    //     if(a[left] == 2 && a[right] == 0 && left<mid<right){
    //         swap(a[left],a[right]);
    //         left++;
    //         right--;
    //     }
    //     if(a[mid]==2 && a[right]==1 && left<mid<right){
    //         swap(a[mid],a[right]);
    //         mid++;
    //         right--;
    //     }
    //     break;
    // }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[9]={0,2,2,1,0,1,1,0,2};
    swapOneTwo(a,8);
}