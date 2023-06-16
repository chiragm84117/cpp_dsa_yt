#include<iostream>
using namespace std;

int main(){
    char name[] ="mom";
    int s=0;
    int e=2;  //n-1
    while(s<=e){
        if(name[s]!=name[e]){
            cout<<"not aa palindrome"<<endl;
            break;
        }
        else{
            s++; 
            e--;
        }
        cout<<"is the palindrome"<<endl;
    }
    

}