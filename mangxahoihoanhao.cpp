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
set<int> a[100005];
bool check[100005];
bool BFS(int u){
    queue<int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty()){
        int d=q.front(); q.pop();
        for(int x:a[d]){
            if(!check[x]){
                if(a[u].find(x)==a[u].end())return 0;
                check[x]=1;
                q.push(x);
            }
        }
    }
    return 1;
}
bool solution(int n){
    for(int i=1;i<=n;i++){
        memset(check,0,sizeof(check));
        if(!BFS(i))return 0;
    }
    return 1;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)a[i].clear();
        memset(check,0,sizeof(check));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].insert(y);
            a[y].insert(x);
        }
        if(solution(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
//TheEnd