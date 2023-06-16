#include<iostream>
using namespace std;

// working of this is 
// let suppose we have gcd(72,24)
// so in first it is not equal so it will go inside the loop
// gcd(72-24,24)  ->  gcd(48,24)
// gcd(48-24,24)  ->  gcd(24,24)
// so here is became eqaul so the answer is 24;

int gcd(int a, int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}


// lcm(a,b)*hcf(a,b) = a*b

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}