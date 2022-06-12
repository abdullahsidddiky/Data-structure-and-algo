#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n+n+1;i++){
        if(i!=n && i!=(n+1)){
        cout<<abs(i-(n))<<" ";
        }
    }
}