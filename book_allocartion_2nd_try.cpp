#include<iostream>
using namespace std;

bool isPossible(int a[],int m,int n,int mid){
    int studentcout=1;
    int no_page =0;
    for(int i=0;i<n;i++){
        if(no_page+a[i]<=mid){
            no_page+=a[i];
        }
        else{
            studentcout++;
            if(studentcout>m || a[i]>mid){   // for a[i]>mid   when new a[i]come and we can check whater the particular value is greater tha mid or not nhi to go ghumti hi rahe gui bas
                return false;
            }
            no_page = a[i];   // listen listen fro this 
            // the i have came from for loop  for this i where it came from else excepting the if 
            // the new student begain and after this else new a[i] will come the one will be skiped to we initilised this which the 
            // last a[i] which came from else ,that didnt enter the if statment  for get studentCount ++
         }

    }
    return true;
}

int main(){
    int m =4;
    int n = 4;
    int sum =0;
    int a[10] = {5,17,100,11};
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int ans =0;
    int s = 0;
    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(a,m,n,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}