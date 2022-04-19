#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int v, e;
        cin>>v>>e;
        vector<int>ds[v+1];
        for(int i=1;i<=e;i++){
            int a,b;
            cin>>a>>b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        for(int i=1;i<=v;i++){
            sort(ds[i].begin(),ds[i].end());
        }
        for(int i=1;i<=v;i++){
            cout<<i<<":";
            for(int j=0;j<ds[i].size();j++){
                cout<<" "<<ds[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}