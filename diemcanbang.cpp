#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0;
        int a[n+5];
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            s+=a[i];
        }
        int ok=0;
        s-=a[1];
        int ss=0;
        for(int i=2;i<=n;i++){
            ss+=a[i-1];
            s-=a[i];
            if(ss==s){
                cout<<i<<endl;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1<<endl;
    }
}