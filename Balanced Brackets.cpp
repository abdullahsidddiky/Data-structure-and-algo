#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 string check;
 for(int i=0;i<n;i++){
    stack <char> s;
    string c;
    cin>>c;
    bool statement = false;
    for(int j=0;j<c.size();j++){
        if(s.empty()){
            s.push(c[j]);
        }
        else{
            if(s.top()=='(' && c[j]==')'){
                s.pop();
            }
            else if(s.top()=='[' && c[j]==']'){
                s.pop();
            }
            else if(s.top()=='{' && c[j]=='}'){
                s.pop();
            }
            else{
                s.push(c[j]);
            }
        }

    }
        if(s.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

}
}
