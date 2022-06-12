#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> s;
    string c;
    float sum =0; 
    ifstream file("file.txt");
    while(getline(file,c)){
        //cout<<c;
        s.push_back(c);
    }
    for(int i =0; i <s.size();i++){
     cout<<s[i]<<" ";   
    }
    
   // cout <<sum/s.size()<<endl;
}