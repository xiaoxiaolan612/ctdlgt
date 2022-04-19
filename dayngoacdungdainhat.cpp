#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int ans=0;
    if(s.size()==0)return 0;
    stack<int>a;
    a.push(-1);
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')a.push(i);
        else {
            a.pop();
            if(a.size()){
                ans=max(ans,i-a.top());
            }
            else a.push(i);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
}