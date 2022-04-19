#include<bits/stdc++.h>
using namespace std;
int c[505][505], a[505][505], n, m;
int tinh(){
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 && j==1) c[i][j] = a[i][j];
            else if(i==1) c[i][j] = a[i][j] + c[i][j-1];
            else if(j==1) c[i][j] = a[i][j] + c[i-1][j];
            else c[i][j] = a[i][j] + min(c[i-1][j-1], min(c[i-1][j], c[i][j-1]));
        }
    }
    return c[n][m];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        cout<<tinh()<<endl;
    }
}