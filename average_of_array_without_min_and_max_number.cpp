#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int avg=0;
    for(int i =1;i<n-1;i++){
        avg+=a[i];
    }
    cout<<avg/(n-2)<<endl;
}