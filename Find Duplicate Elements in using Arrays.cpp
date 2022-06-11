#include <bits/stdc++.h>
using namespace std;
int main(){
    int range;
    cin>>range;
    int arr[range];
    int countarr[range];
    for(int i =1;i<=range;i++){
        countarr[i]=-0;
    }
    for(int i=1;i<=range;i++){

        cin>>arr[i];
        countarr[arr[i]]+=1;
    }

    cout<<endl;
    cout<<"repeated elements"<<endl;
    for(int i =1;i<=range;i++){
        if(countarr[i]>1){
            cout<<i<< " ";
        }
    }
}
