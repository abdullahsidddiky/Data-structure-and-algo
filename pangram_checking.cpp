#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count[256]={0};
    for(int i =0; i <s.length();i++){
        s[i]=tolower(s[i]);
    }

    for(int i =0;i<s.length();i++){
        ++count[s[i]];

    }
    for(int i =97;i<123;i++){
        
        if(count[i]<1){
            cout<<"not";
            return 0;
        }

    }
    cout<<"yes"<<endl;
}