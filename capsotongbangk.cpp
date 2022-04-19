#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0,s=0;
        int n,k;
        cin>>n>>k;
        int x;
        map<int,int>d;
        vector<int>a;
        for(int i=0;i<n;i++) {

            cin>>x;
            d[x]++;
        }
        for(auto i:d)a.push_back(i.first);
        for(int i=0;i<a.size();i++){
            
            ans+=d[a[i]]*d[k-a[i]];
            if(a[i]==k-a[i]) ans-=d[a[i]];
        }
        cout<<ans/2<<endl;
    }
        
}