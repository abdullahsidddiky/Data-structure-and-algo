#include <bits/stdc++.h>
using namespace std;
int main(){
       int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    int k;
    cout<<"number of shift: ";
    cin>>k;
    for(int d=0;d<k;d++){
    for(int i = n-1;i>0;i--){
        swap(ar[0],ar[i]);

    }
    }
    for (int i=0;i<n;i++){
        cout<<ar[i]<<" "; 
    }
}
