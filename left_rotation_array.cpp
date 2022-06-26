#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
     int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=k; i<n;i++){
        swap(a[i],a[n-1]);
        n-=1;
    }
    for(int i=0;i<k;i++){
        swap(a[i],a[k-1]);
        k-=1;
    }
    n= sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n;i++){
        swap(a[i],a[n-1]);
        n-=1;
    }
    n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}