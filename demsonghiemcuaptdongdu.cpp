#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int t;
    cin>>t;
    while(t--){
        int b,p;
        cin>>b>>p;
        int s=0, d=b/p;
        for(int i=1;i<=p;i++){
            if(i*i%p==1) s++;
        }
        s*=d;
        b%=p;
        for(int i=1;i<=b;i++){
            if(i*i%p==1) s++;
        }
        cout<<s<<endl;
    }
}