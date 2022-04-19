#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.size()==0)return true;
    stack<char>str;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')str.push(s[i]);
        else if((s[i]==')'||s[i]=='}'||s[i]==']')&&!str.empty()){
            char c=str.top();
            if((c=='('&&s[i]==')')||(c=='{'&&s[i]=='}')||(c=='['&&s[i]==']'))str.pop();
            else return false;
        }
        else return false;
    }
    return str.empty();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}