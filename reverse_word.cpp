#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack <string> st;
    getline(cin,s);
    string tem="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
           st.push(tem);
            tem="";
        }
        else{
            tem=tem+s[i];
        }
       
       
    }
     st.push(tem);
   while (st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
   }
   
   
}