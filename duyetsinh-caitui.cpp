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

int main(){
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    while(1){
        tinh();
        int i=n;
        while(i>0&&x[i]==1){
            x[i]=0;
            i--;
        }
        if(i==0)break;
        else x[i]=1;
    }
    printf("%.1f\n",(float)fopt);
    for(int i=1;i<=n;i++) cout<<xopt[i]<<" ";
}