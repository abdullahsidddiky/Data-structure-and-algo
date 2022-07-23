#include <bits/stdc++.h>
using namespace std;
int main(){
    set<char> sets;
    string s;
    getline(cin,s);
    int max=0;
    int start=0;
    int end=0;
    while (start<s.size())
    {
        auto it = sets.find(s[start]);
        if(it==sets.end()){
            sets.insert(s[start]);
            if(start-end+1 > max){
                max= start-end+1;
            }
            start++;
        }
        else{
            sets.erase(s[end]);
            end++;
        }
        
    
    }
        cout<<max<<endl;
    
   
}