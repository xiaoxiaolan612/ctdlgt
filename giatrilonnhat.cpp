#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,s;
    cin>>n;
    int x;
    int a[n+3];
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=x+abs(x);
    }
    int ans=0,res=0;
    for(int i=1;i<=n;i++){
        if(res>=0)res+=a[i];
        else res=a[i];
        if(ans<res)ans=res;
    }
    cout<<ans;
    return 0;
}