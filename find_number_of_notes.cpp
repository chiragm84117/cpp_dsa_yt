#include<iostream>
using namespace std;

int main(){
    int amt,n100=0,n50=0,n30=0,n1=0;
    cout<<"enter the no of amt"<<endl;
    cin>>amt;

    if(amt>=100){
        n100=amt/100;
        amt=amt-(n100*100);
    }
    if(amt>=50){
        n50=amt/50;
        amt=amt-(n50*50);
    }
    if(amt>=30){
        n30=amt/30;
        amt=amt-(n30*30);
    }
    if(amt>=1){
        n1=amt/1;
        amt=amt-(n1*1);
    }

    cout<< n100<<" "<<n50<<" "<<n30<<" "<<n1<<endl;
    return 0;
}