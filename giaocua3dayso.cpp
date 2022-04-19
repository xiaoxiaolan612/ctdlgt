#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p;
        cin>>n>>m>>p;
        int a[n],b[m],c[p];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<p;i++) cin>>c[i];
        int i=0,j=0,k=0;
        int kt=0;
        while(i<n&&j<m&&k<p){
            if(a[i]==b[j]&&a[i]==c[k]){
                kt=1;
                cout<<a[i]<<" ";
                i++;j++;k++;
            }
            else if(a[i]<b[j]||a[i]<c[k]) i++;
            else if(b[j]<a[i]||b[j]<c[k]) j++;
            else if(c[k]<a[i]||c[k]<b[j]) k++;
        }
        if(kt==0) cout<<-1;
        cout<<endl;
    }
}