#include<iostream>
using namespace std;

char accured(string s){
    int a[26]={0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = ch-'a';
        a[number]++;
    }

    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(a[i]>max){
            ans=i;
            max=a[i];
        }
    }

    return ans+'a';
}

int main(){
    string ch ="testsample";
    cout<<accured(ch);
    
}