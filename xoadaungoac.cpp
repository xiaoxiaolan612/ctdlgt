#include<bits/stdc++.h>
using namespace std;
int x[1000] ={0}, n, d=0;
struct pair{
    int bd;
    int kt;
} a[20];
string s;
vector<string>kq;
void xuly(){
    stack<int>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(i);
        if(s[i]==')'){
            a[d].bd = st.top(); st.pop();
            a[d].kt = i;
            d++;
        }
    }
}
void xoa(){
    int b[1005]={0}, c=0;
    for(int i=0;i<d;i++){
        if(x[i]){
            b[a[i].bd]++;
            b[a[i].kt]++;
            c=1;
        }
    }
    if(c!=0){
        string tmp;
        for(int i=0;i<s.length();i++){
            if(b[i]) continue;
            tmp+=s[i];
        }
        kq.push_back(tmp);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==d-1) xoa();
        else Try(i+1);
    }
}
int main(){
    cin>>s;
    xuly();
    Try(0);
    sort(kq.begin(),kq.end());
    for(int i=0;i<kq.size();i++){
        if(i!=0 && kq[i-1] != kq[i]) cout<<kq[i]<<endl;
        else if(i == 0) cout<<kq[i]<<endl; 
    }
}