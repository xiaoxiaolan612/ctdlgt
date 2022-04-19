#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair<int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
//
int cmp(ii a,ii b){
    if(a.fi<b.fi)return 1;
    if(a.fi==b.fi&&a.se<b.se)return 1;
    return 0;
}
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;
        vector <ii> a(E+1);
        for(int i=0;i<E;i++)cin>>a[i].fi>>a[i].se;
        sort(a.begin(),a.end(),cmp);
        for(int i=1;i<=V;i++){
            cout<<i<<": ";
            for(int j=0;j<=E;j++){
                if(a[j].fi==i)cout<<a[j].se<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
//TheEnd
// 1: 2

// 2: 5

// 3: 1 2 5

// 4: 4

// 5: 4 6

// 6: 4