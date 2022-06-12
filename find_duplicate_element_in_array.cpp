#include <bits/stdc++.h>
using namespace std;
int main(){
   int n ;
   cin>>n;
   int a[n];
   unordered_map <int,int> m;
   for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
   }
   for(auto i=m.begin();i!=m.end();i++){
    if(i->second >1){
        cout<<i->first<< " ";
    }
   }
   cout<<endl<<endl;
    sort(m);
   for(auto i=m.begin();i!=m.end();i++){
    if(i->second >1){
        cout<<i->first<< " ";
    }
   }

}