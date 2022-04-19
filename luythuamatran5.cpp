#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef  vector<vector<int>> vv;
const int p=1e9+7;
void in(vv a,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i][n-1];
    }
    s%=p;
    cout<<s<<endl;
}
vv tich( vv a, vv b,int n){
    vv c=a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
            for(int k=0;k<n;k++){
                a[i][j]=(a[i][j]%p+(c[i][k]%p*b[k][j]%p)%p)%p;
            }
        }
    }
    return a;
}
vv Try( vv a,int n,int k){
    if(k==1)return a;
    vv d=Try(a,n,k/2);
    d=tich(d,d,n);
    if(k%2==1)d=tich(d,a,n);
    return d;
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vv a (n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cin>>a[i][j];
        }
        a=Try(a,n,k);
        in (a,n);
    }
    return 0;
}