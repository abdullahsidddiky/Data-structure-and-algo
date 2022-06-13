#include <bits/stdc++.h>
using namespace std;
int main(){
    regex v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
    string s;
    getline(cin,s);
    regex v6("((([0-9A-Fa-f]){1,4})\\:){7}(([0-9A-Fa-f]){1,4})");
    if(regex_match(s,v4)){
        cout<<"v4"<<endl;
        return 1;
    }
    else if(regex_match(s,v6)){
        cout<<"v6"<<endl;
        return 1;
    }
    cout<<"not"<<endl;

}