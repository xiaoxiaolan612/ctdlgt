#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        vector<int>v;
        for(int j=1;j<=n;j++){
            int t;
            cin>>t;
            if(t==1) v.push_back(j);
        }
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
