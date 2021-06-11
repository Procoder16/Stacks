#include<bits/stdc++.h>

using namespace std;

bool isBalanced(string s){

    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
            if(!st.empty() && s[i] == st.top()){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){

    cout<<isBalanced("({[]})");
    
    return 0;
}