#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s1,s2,s3;
    int n1,n2,n3;
cin>>n1;
cin>>n2;
cin>>n3;
//int sum =0;
int arr1[n1],arr2[n2],arr3[n3];


for(int i =0;i<n1;i++){
    cin>>arr1[i];
}
for(int i =0;i<n2;i++){
    cin>>arr2[i];
}
for(int i =0;i<n3;i++){
    cin>>arr3[i];
}

int sum = 0;
for(int i =n1-1;i>=0;i--){
    sum+=arr1[i];
    s1.push(sum);
}
sum=0;

for(int i =n2-1;i>=0;i--){
    sum+=arr2[i];
    s2.push(sum);
}
sum = 0;
for(int i =n3-1;i>=0;i--){
    sum+=arr3[i];
    s3.push(sum);

}
int h1,h2,h3;
/*
while(s1.empty() == false){
    cout<<s1.top()<<" ";
    s1.pop();
}
cout<<endl;

while(s2.empty() == false){
    cout<<s2.top()<<" ";
    s2.pop();
}
cout<<endl;
while(s3.empty() == false){
    cout<<s3.top()<<" ";
    s3.pop();
}
*/

//while(s1.empty() == false || s2.empty() ==false ||  s3.empty() ==false){
while(1){
       if(s3.empty() == true ||  s3.empty()==true || s2.empty()==true){
       cout<< "0"<<endl;
       break;
       // return 0;
    }
    h1 = s1.top();
    h2= s2.top();
    h3 = s3.top();
    if(h1 == h2 && h1 == h3){
        cout<<h3<<endl;
        break;
    }
    if(h1> h2 && h1 > h3){
        s1.pop();
    }
    else if(h2 > h1 && h2 > h3){
        s2.pop();
    }
    else if(h3 >h1 && h3 > h2){
        s3.pop();
    }

}







}
