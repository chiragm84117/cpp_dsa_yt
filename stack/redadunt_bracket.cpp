#include<iostream>
#include<stack>
using namespace std;

bool findRedadunt(string& s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            if(ch == ')'){
                bool isRedadunt = true;
                while(st.top != '('){
                    char top = st.top();
                    if(top == '(' || top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedudant = false;
                    }
                    st.pop();
                }
                if(isRedadunt == true){
                    return true;
                }
            }
        }

    }
    return false;
}

int main(){

}