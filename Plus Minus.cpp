#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
//int arr[n];
float positive=0;
float negative=0;
float zero=0;
float value;
for(int i = 0; i<n;i++){
    cin>>value;
    if(value > 0){
        positive++;
        cout<<positive<<endl;
    }
    else if(value<0){
        negative++;
    }
    else {
        zero++;
    }
}
cout <<fixed<<setprecision(6)<<positive/n<<endl;
cout <<fixed<<setprecision(6)<<negative/n<<endl;
cout <<fixed<<setprecision(6)<<zero/n<<endl;
}

