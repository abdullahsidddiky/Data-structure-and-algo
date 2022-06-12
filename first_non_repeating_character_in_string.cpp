#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count[256]={0};
    for(int i=0;i<s.length();i++){
        ++count[s[i]];
    }
    for(int i =0; i< s.length();i++){
       if(count[(int)s[i]]==1){
        cout<<s[i]<<endl;
        break;
       }
        
    }
    

     
}