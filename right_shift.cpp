#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++){
        cin>>a[i];     
    }
    int k;
    cout<<"number of shift: ";

    cin>>k;
    for(int d=0;d<k;d++){
    for(int i=0;i<n;i++){
        swap(a[i],a[n-1]);
    }
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}