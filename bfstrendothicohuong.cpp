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
const int N=1e3+5;
v a[N];
int n,m,id;//so dinh va so canh
int u,e;
bool check[N];
void BFS(int id){
    queue<int>q;
    q.push(id);
    check[id]=false;
    while(!q.empty()){
        id=q.front();  q.pop();
        cout<<id<<" ";
        for(int i=0;i<a[id].size();i++){
            int x=a[id][i];
            if(check[x]){
                q.push(x);
                check[x]=false;
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
        cin>>n>>m>>id;
        for(int i=1;i<=n;i++){
            check[i]=true;
            a[i].clear();
        
        }
        for(int i=1;i<=m;i++){
           cin>>u>>e;
           a[u].push_back(e);
        }
        BFS(id);
        cout<<endl;
    }
    return 0;
}
//TheEnd
// 1 2 
// 2 5 
// 3 1 
// 3 2 
// 3 5 
// 4 3 
// 5 4 
// 5 6 
// 6 3