#include<bits/stdc++.h>
using namespace std;
string xuly(string s){
    stack<char>st;
    string ans="";
    int n= s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            char c=s[i-1];
            if(c == '-' || c== '+') st.push(c);
            if(c == '(' && !st.empty()) st.push(st.top());
        }
        if( !st.empty() && st.top() == '-'){
            if(s[i] == '-') s[i] = '+';
            else if(s[i] == '+') s[i] = '-';
        }
        if(s[i] == ')' && !st.empty()) st.pop();
    }
    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == ')') continue;
        ans +=string(1,s[i]);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        if(xuly(s1) == xuly(s2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}