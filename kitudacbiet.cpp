#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
int check(int n,int k){
    n/=2;
    if(k>n){
        k-=n;
        if(k==1)k=n;
        else k--;
    }
    if(n==s.size())return k;
    return check(n,k);
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>s>>k;
        int n=s.size();
        while(n<k)n*=2;
        k=check(n,k);
        cout<<s[k-1]<<endl;
    }
}