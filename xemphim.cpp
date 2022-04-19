#include<bits/stdc++.h>
using namespace std;
int f[105][25005], a[105], n, m;
int qhd(){
    memset(f,0,sizeof(f));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j>=a[i]){
                f[i][j]= max(f[i-1][j], f[i-1][j-a[i]]+a[i]);
            }
            else f[i][j] = f[i-1][j];
        }
    }
    return f[n][m];
}
int main(){
        cin>>m>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<qhd();
}