#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
int di[]={-1,0,0,1,-1,-1,1,1};
int dj[]={0,-1,1,0,-1,1,-1,1};
//
const int N=1e6+5;
int bit[N]={0};
void update(int i){
    for(;i<N;i+=i&-i)bit[i]++;
}
int get(int i){
    int ans=0;
    for(;i;i-=i&-i)ans+=bit[i];
    return ans;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    stack<int>st;
    for(int i=n;i>0;i--){
        if(a[i]%2==0){
            ans+=get(a[i]-1);
            st.push(a[i]);
        }
        else{
            while(!st.empty()){
                update(st.top());
                st.pop();
            }
        }
    }
    cout<<ans;
    // for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
    return 0;
}
//TheEnd