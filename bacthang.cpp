#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int db(int n, int k){
    long long f[100005]={0};
    int i,j;
    f[0]=f[1]=1;
    for(i=2;i<=n;i++){
        for(j=1;j<=min(i,k);j++){
            f[i]+=f[i-j];
            f[i]%=mod;
        }
    }
    return f[n];
}
int main(){
    int t;
    int n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<db(n,k)<<endl;
    }
}