#include<bits/stdc++.h>
using namespace std;
int n,m, a[20][20];
int dem=0;
void Try(int i, int j){
    if(i>n||j>m||i<1||j<1) return;
    if(i==n&&j==m){
        dem++;
        return;
    }
    Try(i+1,j);
    Try(i,j+1);
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
        Try(1,1);
        cout<<dem;
        cout<<endl;
        dem=0;
    }
}