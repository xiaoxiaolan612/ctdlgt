#include<bits/stdc++.h>
using namespace std;
int n, a[20][20];
bool visit[20][20];
int kt=0;
vector<string>ans;
void Try(int i, int j, string s ){
    if(a[i][j]==0||i>n||j>n||i<1||j<1) return;
    if(i==n&&j==n){
        //cout<<s<<endl;
        ans.push_back(s);
        kt=1;
        // return;
    }
    if(!visit[i+1][j]){
        visit[i+1][j]=1;
        Try(i+1,j,s+"D");
        visit[i+1][j]=0;
    }
    if(!visit[i][j-1]){
        visit[i][j-1]=1;
        Try(i,j-1,s+"L");
        visit[i][j-1]=0;
    }
    if(!visit[i][j+1]){
        visit[i][j+1]=1;
        Try(i,j+1,s+"R");
        visit[i][j+1]=0;
    }

    if(!visit[i-1][j]){
        visit[i-1][j]=1;
        Try(i-1,j,s+"U");
        visit[i-1][j]=0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(visit,0,sizeof(visit));
        memset(a,0,sizeof(a));
        ans.clear();
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        visit[1][1]=1;
        Try(1,1,"");
        if(kt==0) cout<<-1<<endl;
        else {
            cout<<ans.size()<<" ";
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<endl;           
        }
        kt=0;
    }
}