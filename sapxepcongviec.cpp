#include<bits/stdc++.h>
using namespace std;
struct dl{
    int s,f;
};
bool tmp(dl a,dl b){
    return a.f<b.f;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        dl a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i].s;
        for(int i=1;i<=n;i++)cin>>a[i].f;
        sort(a+1,a+n+1,tmp);
        int d=1,i=1;
        for(int j=2;j<=n;j++){
            if(a[j].s>=a[i].f){
                d++;i=j;
            }
        }
        cout<<d<<endl;
    }
}