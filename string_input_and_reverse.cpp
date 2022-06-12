#include <bits/stdc++.h>
using namespace std;
string fun(){
    cout<<"enter string"<<endl;
    string s;
    getline(cin,s);
    int i=0; 
    int j =s.length()-1;
    while(i<=j){
        swap(s[i],s[j]);
        --j;
        ++i;
    }
  
    return s;
}

int main(){
    string s;
    s=fun();
    cout<<endl;
    cout<<s<<endl;
}