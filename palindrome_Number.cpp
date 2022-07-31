#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n;
    int sum=0;
    int temp;
    if(n<0){
        return 0;
    }
    x=n;
    while(n!=0){
        temp=n%10;
        n =n/10;
        sum =sum*10 + temp;
    }
   if(x==sum){
    return 1;
   }
   return 0;
}
