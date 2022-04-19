#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n+2];
        int b[n+2], k=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0) cout<<a[i]<<" ";
            else b[k++]=a[i];
        }
        //for(int i=0;i<k;i++) cout<<b[i]<<" ";
        int x=0;
        for(int i=0;i<k;i++){
            x=max(x,b[i]);
        }
        int vt=0;
        for(int i=0;i<k;i++){
            if(b[i]==x) {
                vt=i;
                break;
            }
        }
        for(int i=0;i<vt;i++) cout<<b[i]<<" ";
        cout<<m<<" ";
        for(int i=vt;i<k;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}