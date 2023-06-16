#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<e){
        swap(v[s++],v[e--]);
    }
    for(int i:v){
        cout<<i;
    }
}

void add_array(int a[],int b[],int n,int m){
    int i=n-1;
    int j=m-1;
    int carry = 0;
    vector<int> ans;
    int sum =0 ;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        sum = val1+val2+carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry !=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    reverse(ans);
}

int main(){
    int a[10]={1,4,6,8};
    int b[10]={3,4};
    int n=4;
    int m=2;
    add_array(a,b,n,m);
}