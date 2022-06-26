#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
     n-=k;
    for(int i=0;i<n;i++){
        swap(a[i],a[n-1]);
        n-=1;
    }
    n= sizeof(a)/sizeof(a[0]);
    for(int i=k+1;i<n;i++){
        swap(a[i],a[n-1]);
        n-=1;
    }
    n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        swap(a[i],a[n-1]);
        n-=1;
    }  
    n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  

}