#include <bits/stdc++.h>
using namespace std;
stack <int> st;
void stackreverse(){
   if(st.empty()){
    return;
   }
   int value;
   value = st.top();
   st.pop();
   stackreverse();
   st.push(value);

};
int main(){
int n;
cin>>n;
int v;

while(n--){
    cin>>v;
    st.push(v);
}
stackreverse();

while(st.empty() == false){
    cout<<st.top()<<" ";
    st.pop();
}

}
