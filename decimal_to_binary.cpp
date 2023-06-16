#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1; //right shift mean dividing the value by 2 and to convert decimal to binary we divide it by 2
        i++;
    }
    cout<<"ans is "<<ans<<endl;
}