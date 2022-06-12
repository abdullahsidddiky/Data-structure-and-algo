#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a!=b){
        cout<<"not";
        return 0;
    } 
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            cout<<"not";
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}