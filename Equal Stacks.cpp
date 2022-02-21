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
void sumstack(stack <int> &s,int &sum){
    if (s.empty() ==  true){
        return;
    }

    int temp = s.top();
    s.pop();
    sumstack(s,sum);
    sum+=temp;
    s.push(sum);

}

int main(){
    stack<int> s1,s2,s3;
    int n1,n2,n3;
    int v;
    int sum = 0;
cin>>n1;
cin>>n2;
cin>>n3;
while(n1--){
    cin>>v;
    s1.push(v);
}
while(n2--){
    cin>>v;
    s2.push(v);
}

while(n3--){
    cin>>v;
    s3.push(v);
}

reversestack(s1);
reversestack(s2);
reversestack(s3);

sum=0;
sumstack(s1,sum);
//cout<<sum<<endl;
sum=0;
sumstack(s2,sum);
//cout<<sum<<endl;
sum=0;
sumstack(s3,sum);
//cout<<sum<<endl;
int flag =1;

while(s1.empty() == false && s2.empty() ==false && s3.empty() ==false){
    if(s1.top() > s2.top() && s1.top() > s3.top()){
        s1.pop();
        if(s1.top() == s2.top() && s1.top() == s3.top()){
            cout<<s1.top()<<endl;
            break;
        }
    }
    else if(s2.top() > s1.top() && s2.top()>s3.top()){
        s2.pop();
         if(s1.top() == s2.top() && s1.top() == s3.top()){
            cout<<s1.top()<<endl;
            break;
        }
    }
    else if(s3.top() > s1.top() && s3.top()>s2.top()){
        s3.pop();
         if(s1.top() == s2.top() && s1.top() == s3.top()){
            cout<<s1.top()<<endl;
            break;
        }
    }
    else if(s3.empty() == true ||  s3.empty()==true || s2.empty()==true){
        cout<<"0"<<endl;
        break;
    }
    else{
        cout<<s1.top()<<endl;
        break;
    }



}







}
