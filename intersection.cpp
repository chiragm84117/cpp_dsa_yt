#include<iostream>
#include<vector>
using namespace std;
vector<int> inter(int a[],int b[],int n){
    vector <int> ans;
    for(int i=0 ; i<n;i++){
        int element= a[i];
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                ans.push_back(element);
                b[j]=-1;
                break;
            }
        }
    }
    return ans;
}

int main(){
    int a[10]={1,2,3,4,5};
    int b[10]={2,4,6,8,9};
    int n=4;
    // cout<<inter(a,b,n)<<endl;

}