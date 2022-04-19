#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1], d[n+1];
        for(int i=1;i<=n;i++)cin>>a[i],d[i]=a[i];;
        sort(d+1,d+n+1);
        int l=1,r=n;
        while(a[l]==d[l])l++;
        while(a[r]==d[r])r--;
        cout<<l<<" "<<r<<endl;
    }
}