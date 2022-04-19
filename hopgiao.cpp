#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a;
        map<int,int>d;
        for(int i=0;i<n;i++){
            cin>>a;
            d[a]++;
        }
        for(int i=0;i<m;i++){
            cin>>a;
            d[a]++;
        }
        for(auto x:d){
            cout<<x.first<<" ";
        }
        cout<<endl;
        for(auto x:d){
            if(x.second>1) cout<<x.first<<" ";
        }
        cout<<endl;
    }
}