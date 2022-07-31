#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long sum=0;
    int temp;
    while (n!=0)
    {
       temp=n%10;
       n=n/10;
        sum= sum*10+temp;
       if(sum > INT_MIN || sum <INT_MAX){
        return 0;
       }
       
    }
    return sum;
    
}