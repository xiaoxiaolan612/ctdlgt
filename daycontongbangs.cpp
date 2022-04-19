#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
int di[]={-1,0,0,1};
int dj[]={0,-1,1,0};
//
struct note{
    int sum,sz;
};
int n,s;
int a[35];
unordered_map<int,int>dp;
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>a[i];
    dp[0]=1;
    int ans=1000;
    for(int i=1;i<=n;i++){
        stack<note>st;
        for(auto x:dp){
            if(x.fi+a[i]<=s){
                st.push({x.fi+a[i],x.se+1});
            }
        }
        while(!st.empty()){
            note c=st.top(); st.pop();
            if(c.sum==s)ans=min(ans,c.sz-1);
            if(dp[c.sum]==0)dp[c.sum]=c.sz;
            else dp[c.sum]=min(dp[c.sum],c.sz);
        }
    }
    if(ans!=1000)cout<<ans<<endl;
    else cout<<-1;
    return 0;
}
//TheEnd