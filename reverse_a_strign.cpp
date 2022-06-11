#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="abcd";
    int len=s.size();
    int j =len-1;
    for(int i =0;i<len; i++){
        if(i < j){
            swap(s[i],s[j]);
            cout<<s[i]<< s[j]<<endl;
            
        }
        j--;
    }
   cout<<s<<endl;
    
}