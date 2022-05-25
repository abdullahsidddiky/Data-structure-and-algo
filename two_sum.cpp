#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v,res;
int n ;
cin>>n;
int a;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
cin>>a;
int first=0;
int rear = v.size()-1;
//cout<<rear;
//sort(v.begin(),v.end());
while(first<rear){
   if(v[first]+v[rear]==a){
    cout<<"["<<first<<","<<rear<<"]"<<endl;
    //cout<<v[first]<<"  "<<v[rear];
    break;
   }
   else if(a <(v[first]+v[rear])){
    rear--;
   }
   else {
    first++;
    rear++;
   }

}
}
