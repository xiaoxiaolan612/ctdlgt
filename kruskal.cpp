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
struct canh{
    int dau,cuoi,ts;
};
int n,m;
int d[1005];
int find(int i){
    if(d[i]==-1)return i;
    return find(d[i]);
}
void Union(int x,int y){
    int a=find(x);
    int b=find(y);
    if(a!=b)d[a]=b;
}
bool chutrinh(vector<canh> a){
    memset(d,-1,sizeof(d));
    for(int i=0;i<a.size();i++){
        int x=find(a[i].dau);
        int y=find(a[i].cuoi);
        if(x==y)return 1;
        Union(x,y);
    }
    return 0;
}
bool cmp(canh a,canh b){
    return a.ts<b.ts;
}
void kruskal(canh a[]){
    vector<canh> caykhung;
    sort(a,a+m,cmp);
    int ans=a[0].ts;
    caykhung.push_back(a[0]);
    for(int i=1;i<m;i++){
        caykhung.push_back(a[i]);
        if(!chutrinh(caykhung))ans+=a[i].ts;
        else{
            caykhung.pop_back();
            continue;
        }
        if(caykhung.size()>n-1)break;
    }
    cout<<ans<<endl;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        canh a[m];
        for(int i=0;i<m;i++){
            cin>>a[i].dau>>a[i].cuoi>>a[i].ts;
        }
        kruskal(a);
    }
    return 0;
}
//TheEnd