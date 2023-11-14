#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

string FirstNon(string s){
    unordered_map<char,int> count;
    queue<int> q;
    string ans="";

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        count[ch]++; //increase count

        // queue me push
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        // if it got empty
        if(q.empty()){
            ans.push_back('#');
        }

        return ans;
    }
}

int main(){

}