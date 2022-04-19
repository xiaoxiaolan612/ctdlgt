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
int k=0;
v a[1005];
int d[1005];
bool check[1005],ok;
void reset(int n){
    for(int i=1;i<=n;i++)a[i].clear();
}
void BFS(int u){
    k++;
    queue<int>q;
    q.push(u);
    check[u]=1; d[u]=u;
    while(!q.empty()){
        int val=q.front(); q.pop();
        for(int x:a[val]){
            if(!check[x]){
                check[x]=1;
                d[x]=u;
                q.push(x);
            }
            else{
                if(d[x]!=u)ok=1;
            }
        }
    }
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;reset(n);
        memset(check,0,sizeof(check));
        memset(d,0,sizeof(d));
        for(int i=1;i<n;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        k=0,ok=0;
        for(int i=1;i<=n;i++){
            if(!check[i])BFS(i);
        }
        if(k!=1||ok==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
//TheEnd