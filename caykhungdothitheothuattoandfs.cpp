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
v a[1005];
bool check[1005];
vector<ii>ans;
void BFS(int u){
    check[u]=1;
    for(int x:a[u]){
        if(!check[x]){
            check[x]=1;
            ans.push_back({u,x});   
            BFS(x);
        }
    }
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans.clear();
        int n,m,u;
        cin>>n>>m>>u;
        for(int i=1;i<=n;i++)a[i].clear();
        memset(check,0,sizeof(check));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(u);
        if(ans.size()!=n-1)cout<<-1<<endl;
        else {
            for(auto x:ans)cout<<x.fi<<" "<<x.se<<endl;
        }
    }
    return 0;
}
//TheEnd