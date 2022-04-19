#include<bits/stdc++.h>
using namespace std;
int n, m, fopt=0;
int a[100], b[100], xopt[100],x[100];
void tinh(){
    int sum=0,kl=0;
    for(int i=1;i<=n;i++){
        if(x[i]==1){
            sum+=a[i];
            kl+=b[i];
        }
    }
    if(sum<=m&&kl>fopt){
        fopt=kl;
        for(int i=1;i<=n;i++) xopt[i]=x[i];
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n) {
            tinh();
        }
        else Try(i+1);
    }
}
int main(){
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    Try(1);
    printf("%.1f\n",(float)fopt);
    for(int i=1;i<=n;i++) cout<<xopt[i]<<" ";
}