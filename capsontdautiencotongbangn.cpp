#include<bits/stdc++.h>
using namespace std;
int a[1000000];
void era(){
    for(int i=2;i<=500000;i++){
        if(a[i]==0) {
            for(int j=i*2;j<=1000000;j+=i) a[j]=1;
        }
    }
}
int main(){
    era();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ok=0;
        for(int i=2;i<=n/2;i++){
            if(a[i]==0&& a[n-i]==0){
                cout<<i<<" "<<n-i<<endl;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1<<endl;
    }
}