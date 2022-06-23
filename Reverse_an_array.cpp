#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s;
    for( int i =0;i<n;i++){
        cin>>s;
        a[i]=s;
    }
    int j = n-1;
    int i = 0;
     while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
     }
     for(int k =0; k<n;k++){
        cout<<a[k]<< " ";
     }
}