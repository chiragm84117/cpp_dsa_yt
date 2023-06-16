#include<iostream>
#include<vector>
using namespace std;

void reverse(string& s,int start,int end){
    while(start<end){
        swap(s[start++],s[end--]);
    }
}

// void reverse_word_string(string& s){
//     int word_begin=-1;
//     int i=0;
//     while(i<s.size()){
//         if(word_begin==-1 && s[i]!=' '){
//             word_begin=i;
//         }
//         if(((word_begin!=-1) && (s[i+1]==' ')) || (i+1==s.size()) ){
//             reverse(s,word_begin,i);
//             word_begin=-1;
//         }
//         i++;
//     }
//     // reverse(s,0,s.size()-1);
// }

void reverse_word_string(string& s){
    int wordbegain =-1;
    int i=0;
    while(i<s.size()){
        if(s[i]!=' ' && wordbegain==-1){
            wordbegain=i;
        }
        if(((wordbegain!=-1) && (s[i+1]==' ' ))|| (i+1 == s.size())){
            reverse(s,wordbegain,i);
            wordbegain=-1;
        }
        i++;
    }

}

int main(){
    string s="my name is chirag";
    reverse_word_string(s);
    cout<<s<<endl;
    return 0;
}