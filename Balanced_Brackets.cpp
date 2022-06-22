#include <bits/stdc++.h>
using namespace std;

int main(){
stack <char> st;
string s;
int n;
  cin>>n;
while(n--){
  cin>>s;
  stack <char> st;
    for(int i =0; i < s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
            continue;
        }
        if(st.top() =='(' && s[i]==')'){
            st.pop();
            
        }
        else if(st.top() =='[' && s[i]==']'){
            st.pop();
        }
         else if(st.top() =='{' && s[i]=='}'){
            st.pop();
            
        }
        
        else {
            st.push(s[i]);
        }
        }
    }
    if(st.empty()){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
}
