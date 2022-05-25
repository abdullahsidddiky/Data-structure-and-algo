
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n;
    cin>>m;
    int teamA[n];
    int teamB[m];
    int sum=0;
    for(int i =0 ; i <n;i++){
        cin>>teamA[i];
    }
    for(int i =0 ;i<m;i++){
        cin>>teamB[i];
    }

    for(int j=0;j<m;j++){
        sum=0;
        for(int i = 0 ;i<n;i++){
          if(teamA[i]<=teamB[j]){
              sum++;
          }
        }
        cout<<sum<<endl;
    }
}
