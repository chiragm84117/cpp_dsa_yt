#include<iostream>
#include<queue>

using namespace std;

vector<long long> printFirstNeg(long long int a[],long long int n,long long int k){
    deque<long long int> dq;
    vector<long long> ans;

// process fist window
    for(int i=0;i<k;i++){
        if(a[i]<0){
            dq.push_back(i);
        }
    }
    // store answer of first k sized window
    if(dq.size()>0){
        ans.push_back(a[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    // process rest window
    for(int i=k;i<n;i++){
        // removal
        if(!dq.empty() && i-dq.front() >=k){   //yeh likha h bcz humkoo yeh remove krnaa h  ek window ke bad 
            dq.pop_front();
        }
        // addition
        if(a[i]<0){
            dq.push_back(i);
        }
        // ans stroe
        if(dq.size()>0){
            ans.push_back(a[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
} 
return ans;
}


int main(){

}