#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    vector<string> sv;
    string s;
    string tem="";
    cin>>s;
   for(int i =0;i<s.length();i++){
    if(s[i] == ' '){
        
        st.push(tem);
        tem="";
    }
    else {
        tem+=s[i];
    }
}
while(st.size()>0){
        cout<<st.top();
        st.pop();
    }
    cout<<st.size();
}