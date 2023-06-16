#include<iostream>
using namespace std;
int main(){
    int n=10;
    bool isPrime=1;
    for(int i=2 ; i<n;i++){
        if(n%i==0){
            // cout<<"not a prime no"<<endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        cout<<"its";
    }
    else{
        cout<<"not";
    }
}