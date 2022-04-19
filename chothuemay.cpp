#include<bits/stdc++.h>
using namespace std; 
struct rent{
    vector<int> arr;
};
vector<rent>tmp;
int s=0;
int n,m,ans=0;
vector<int> a[100];
void print(vector<int> d){
    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
    cout<<endl;
}
int solve(vector<int> d){
    int ans=0;
    bool visit[100];
    memset(visit,0,sizeof(visit));
    for(int i=1;i<=n;i++){
        if(d[i]==1){
            for(int x:a[i]){
                if(visit[x]==1)return 0;
                visit[x]=1; ans++;
            }
        }
    }
    return ans;
}

main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin>>x;
            if(x==1)a[i].push_back(j);
        }
    }
    vector<int> d(100,0);
    while(1){
        int k=solve(d);
        if(k>s){
            tmp.clear();
            tmp.push_back({d});
            s=k;
        }
        else if(k==s)tmp.push_back({d});
        int i=n;
        while(d[i]==1){
            d[i]=0; i--;
        }
        if(i==0)break;
        else d[i]=1;
    }
    for(auto x:tmp)print(x.arr);
}