#include <bits/stdc++.h>
using namespace std;
void stackreverse(stack<int> s){
    int value;
    value = s.top();
    s.pop();
    stackreverse(s);
    s.push(value);
};
int main(){

stack <int> st;
int n;
cin>>n;
int v;

while(n--){
    cin>>v;
    st.push(v);
}
while(st.empty() == false){
    cout<<st.top()<<" ";
    st.pop();
}

}
