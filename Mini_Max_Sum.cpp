#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
//cin>>n;
int arr[5];
long int sum=0;
for(int i=0;i<5;i++){
    cin>>arr[i];
}
sort(arr,arr+5);
for(int i =0;i<5-1;i++){
    sum+=arr[i];
}
cout<<sum<<" ";
sum=0;
for(int i =1;i<5;i++){
    sum+=arr[i];
}
cout<<sum<<endl;
}
