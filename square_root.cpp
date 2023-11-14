#include<iostream>
using namespace std;

long long int binSearch(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int sqr=mid*mid;
            if(sqr==n){
                return mid;
            }
            if(sqr<n){
                ans=mid;   //to get possible answer support if we have output as 5.4   as per int the output will be 5  to to store previos to wil int value it store as ans
                s=mid+1;
                
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
 double morePrecision(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
 }


int main(){
    int n;
    cin>>n;
    // cout<<binSearch(n);

    // to find the float value
    int tempsol=binSearch(n);
    cout<<morePrecision(n,3,tempsol);
}
