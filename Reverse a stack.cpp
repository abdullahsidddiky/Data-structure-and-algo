#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack <int> &s, int k){
if (s.empty()){
    s.push(k);
    return;
}
    int temp = s.top();
    s.pop();
    insertatbottom(s,k);
    s.push(temp);

}
void stackreverse(stack <int> &st){
   if(st.empty()){
    return;
   }
   int value;
   value = st.top();
   st.pop();
   stackreverse(st);
   insertatbottom(st ,value);


};
int main(){
    stack<int> st;
    int n;
    cin>>n;
    int v;

while(n--){
    cin>>v;
    st.push(v);
}
stackreverse(st);

while(st.empty() == false){
    cout<<st.top()<<" ";
    st.pop();
}

}
