#include <bits/stdc++.h>
using namespace std;
string encode(vector<string> &s){
    string res="";
    string l;
    for(int i=0;i<s.size();i++){
        l=s[i];
        res+= to_string(l.length())+"#"+s[i];
    }
    return res;
}

string decode(string s){
    string l="";
    int num;
    string s_d="";
    for(int i=0;i<s.size();i++){
        if(s[i] != '#' && s[i]>='0' && s[i]<='9'){
            l+=s[i];
        }
        if(s[i]=='#') {
            s_d += s.substr(i+1, stoi(l)) + " ";  
            i+=stoi(l); 
            l="";
        }
    }
    
   return s_d;
}

int main(){
   vector <string> s={"abdullah","siddiky","#"};   
    string encoded=encode(s);
    cout<<"encoded string: "<<encoded<<endl;
    decode(encoded);
    string decoded=decode(encoded);
    cout<<"decoded string: "<<decoded<<endl;

}  