#include<iostream>
using namespace std;

struct circluar_town_petrol
{
    int petrol;
    int distance;
};


int petrolCircle(circluar_town_petrol p[],int n){
    int deficit =0;
    int balance =0;
    int start=0;

    for(int i=0;i<n;i++){
        balance = balance+p[i].petrol+p[i].distance;
        if(balance<0){
            deficit=deficit+balance;
            start = i+1;
            balance = 0;
        }
    }  
    if(deficit+balance>=0)
        return start;
    else
        return -1;

}

int main(){

}