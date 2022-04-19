#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m, a[100000], b[100000];
int dem(int d[], int i){
    if(i==0) return 0;
    if(i==1) return d[0];
    int t= upper_bound(b,b+m,i)-b;
    int ans=m-t;
    ans+= d[0]+d[1];
    if(i==2) ans-=(d[3]+d[4]);
    if(i==3) ans+=d[2];
    return ans;
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int d[10]={0};
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<5) d[b[i]]++;
        }
        sort(b,b+m);
        int res=0;
        for(int i=0;i<n;i++){
            res+= dem(d,a[i]);
        }
        cout<<res<<endl;
    }
}
//x^y>y^x =>y>x
//x=0 => x^y<=y^x
//x=1 y=0 => x^y>y^x
//x=2  y=3/y=4 => x^y <= y^x
// x=3 y=2 x^y>y^x