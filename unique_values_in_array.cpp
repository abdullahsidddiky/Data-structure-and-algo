#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map <int, int> m;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        m[a]++;

    }
    for(auto i=m.begin(); i!=m.end();i++){
       
            cout<<i->first<<" ";
        
    }
}