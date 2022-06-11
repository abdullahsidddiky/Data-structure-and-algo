#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    n=n+n;
    for(int i =1;i<=n-1;i++){
        if(i> (n/2)){
            cout<<abs(i-n)<<" ";
        }
        else{ 
            cout<<i<<" ";
        }
    }

}