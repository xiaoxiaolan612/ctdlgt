#include<bits/stdc++.h>
using namespace std;
int n, a[20][20];
int kt=0;
void Try(int i, int j, string s ){
    if(a[i][j]==0||i>n||j>n||i<1||j<1) return;
    if(i==n&&j==n){
        cout<<s<<" ";
        kt=1;
        return;
    }
    Try(i+1,j,s+"D");
    Try(i,j+1,s+"R");
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        Try(1,1,"");
        if(kt==0) cout<<-1;
        cout<<endl;
        kt=0;
    }
}