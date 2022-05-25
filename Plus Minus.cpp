#include <bits/stdc++.h>
using namespace std;
int main(){
  vector <int> v;
  int a;
  int n;
  cin>>n;
  float positive=0;
  float negative=0;
  float zero=0;
  for(int i=0;i<n;i++){
    cin>>a;
    if(a>0){
        positive++;
    }
    else if(a<0){
        negative++;
    }
    else{
        zero++;
    }

  }
      cout<<positive/n<<endl;
    cout<<negative/n<<endl;
    cout<<zero/n<<endl;


}
