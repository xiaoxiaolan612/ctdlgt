#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod = 123456789;
long long powermod(int n, int k){
    if(k==0) return 1;
    long long x=powermod(n,k/2);
    if(k%2==0) return x*x%mod;
    return n*(x*x%mod)%mod;
}
main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<powermod(2,n-1)<<endl;
    }
}