#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
int di[]={-1,0,0,1};
int dj[]={0,-1,1,0};
//
int degree(char c){
    if(c=='^')return 5;
    if(c=='*'||c=='/')return 4;
    if(c=='+'||c=='-')return 3;
    return 2;
}
bool check(char c){
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s,res="";
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(check(s[i]))res+=s[i];
            else if(s[i]=='(')st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty()&&st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                while(!st.empty()&&degree(st.top())>=degree(s[i])){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            if(st.top()!='(')res+=st.top();
            st.pop();
        }
        cout<<res<<endl;
    }
    return 0;
}
//TheEnd