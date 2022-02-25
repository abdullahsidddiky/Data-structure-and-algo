#include <bits/stdc++.h>
using namespace std;
int main(){
stack <string> s;
int n;
cin>>n;
string c;
bool statement;
for(int i = 0;i<n;i++){
       cin>>c;
    for(int j = 0; j<c.length();j++){
    if(s.top() == ")" || s.top()=="]" || s.top() == ")"){
        statement = true;
        break;
    }
    else if(s.top()=="(" && c[j] == ")"){
        s.pop();
    }
    else if(s.top()=="{" && c[j]=="}"){
        s.pop();
    }
    else if(s.top()=="[" && c[j]=="]"){
        s.pop();
    }
    else {
        s.push(c);
    }
}
if(statement){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
}
