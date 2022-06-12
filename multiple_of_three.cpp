#include <bits/stdc++.h>
using namespace std;
void printfunciton(int multiple, int n){
    for(int i = (n/multiple); i>=multiple; i-=multiple){
    cout<<i<<" ";
   }
}
int main(){
   int multiple;
   cout<<"multiple:"<<endl;
   cin>>multiple;
   int n;
   cout<<"n:"<<endl;
   cin>>n;
   printfunciton(multiple, n);
   
}