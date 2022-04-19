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
int n,m;
v a[105];
bool check[105];
bool visit[105][105];
int BFS(int u,int final){
    memset(check,0,sizeof(check));
    queue <ii> q;
    q.push({u,0});
    check[u]=1;
    while(!q.empty()){
        ii c=q.front(); 
        q.pop();
        if(c.fi==final)return c.se;
        for(auto x:a[c.fi]){
            if(!check[x]){
                check[x]=1;
                q.push({x,c.se+1});
            }
        }
    }
    return 0;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        double ans=0,count=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)a[i].clear();
        // memset(visit,0,sizeof(visit));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        for(int i=1;i<=n;i++){
            for(int j=n;j>i;j--){
                int d1=BFS(i,j);
                int d2=BFS(j,i);
                if(d1!=0&&d2!=0){
                    ans+=d1+d2;
                    count+=2;
                }

            }
        }
        printf("%.2lf\n",(double)(ans/count));
    }
    return 0;
}
//TheEnd