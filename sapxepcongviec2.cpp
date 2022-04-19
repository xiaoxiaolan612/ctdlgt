#include<bits/stdc++.h>
using namespace std;
struct dl{
    int s,f,stt;
};
bool tmp(dl a,dl b){
    return a.s>b.s;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dl a[n+1];
        for(int i=0;i<n;i++)cin>>a[i].stt>>a[i].f>>a[i].s;
        sort(a,a+n,tmp);
        int d=0,res=0, F[1001]={0};
        for(int i=0;i<n;i++){
            while(F[a[i].f] && a[i].f>0) a[i].f-=1;
            if(!F[a[i].f] && a[i].f>0){
                F[a[i].f]=1;
                res+=a[i].s;
                d++;
            }
        }
        cout<<d<<" "<<res<<endl;
    }
}