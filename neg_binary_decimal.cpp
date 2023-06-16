// here the negative no is first will be taken as positive the 
// then we will find out the binary representation of that after that 
// we will change that to 1s and 2nd complement to get the negavtive represenation of that element 

#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n,i=0,ans=0;
    cin>> n;
    // to make it positive
    n=~n+1;
    while(n!=0){
        int bit=n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1; //right shift mean dividing the value by 2 and to convert decimal to binary we divide it by 2
        i++;
    }
    cout<<ans<<endl;
    
    
}