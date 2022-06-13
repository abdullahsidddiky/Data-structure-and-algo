#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3};
    int c=1;
    int res=0;
    for(int i=2;i>=0;i--){
        
            res+=a[i]*c;
            c*=10;
            cout<<a[i]<< " ";

        
    }
    int n;
    cin>>n;
    res+=n;

     while(res!=0){
        cout<<res%10<<" ";
        res/=10;
        
     }
}