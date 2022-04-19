#include<bits/stdc++.h>
using namespace std; 
#define int long long 
typedef vector<int> v;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        stack<int>st;
        v l(n+1);
        for(int i=1;i<=n;i++){
            while(!st.empty()&&a[st.top()]>=a[i])st.pop();
            l[i]=st.empty()?1:st.top()+1;
            st.push(i);
        }
        while(!st.empty())st.pop();
        v r(n+1);
        for(int i=n;i>0;i--){
            while(!st.empty()&&a[st.top()]>=a[i])st.pop();
            r[i]=st.empty()?n:st.top()-1;
            st.push(i);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            // cout<<l[i]<<" "<<r[i]<<endl;
            if(a[i]<=r[i]-l[i]+1)ans=max(ans,a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}