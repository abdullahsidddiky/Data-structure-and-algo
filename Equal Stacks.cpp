#include <bits/stdc++.h>
using namespace std;
void insertatbottom(stack <int> &s, int key){
    if(s.empty()){
        s.push(key);
        return;
    }
    int  temp = s.top();
    s.pop();
    insertatbottom(s,key);
    s.push(temp);

}
void reversestack(stack <int> &s){
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
    reversestack(s);
    insertatbottom(s,temp);
}

int main(){
    stack<int> st;
    int n;
    cin>>n;
    int v;

while(n--){
    cin>>v;
    st.push(v);
}
reversestack(st);

while(st.empty() == false){
    cout<<st.top()<<" ";
    st.pop();
}

}
