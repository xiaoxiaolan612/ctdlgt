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
int n,m,start;
vector<ii> a[1005];
int d[1005];
bool check[1005];
struct cmp{
    bool operator()(ii x,ii y){
        return x.fi>=y.fi;
    }
};
void dijkstra(int u){
    for(int i=1;i<=n;i++)d[i]=1e9;
    d[u]=0;
    priority_queue<ii,vector<ii>,cmp>q;
    q.push({0,u});
    while(!q.empty()){
        int k=q.top().se; q.pop();
        for(auto x:a[k]){
            int s=x.se;
            int d_k_s=x.fi;
            if(d[k]+d_k_s<d[s]){
                d[s]=d[k]+d_k_s;
                q.push({d[s],s});
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
    cout<<endl;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>start;
        for(int i=1;i<=n;i++)a[i].clear();
        for(int i=1;i<=m;i++){
            int x,y,z;
            cin>>x>>y>>z;
            a[x].push_back({z,y});
            a[y].push_back({z,x});
        }
        dijkstra(start);
    }
    return 0;
}
//TheEnd