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
v a[1005];
bool check[1005];
v ans;
// 
void reset(){
    for(int i=1;i<=n;i++)a[i].clear();
    memset(check,0,sizeof(check));
}
void BFS(int u){
    queue<int>q;
    q.push(u);
    check[u]=1;
    while(!q.empty()){
        u=q.front();  q.pop();
        for(int x:a[u]){
            if(!check[x]){
                check[x]=1;
                q.push(x);
            }
        }
    }
}
bool test(int u){
    memset(check,0,sizeof(check));
    check[u]=1;
    int res=0;
    for(int i=1;i<=n;i++){
        if(!check[i]){
            res++;
            if(res>1)return 0;
            BFS(i);
        }
    }
    return 1;
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans.clear();
        reset();
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            if(!test(i))ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
//TheEnd