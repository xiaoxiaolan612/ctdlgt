#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>cnt;
void Try(int n,int dem){
    if(cnt[n])return ;
    cnt[n]=n;
    if (n%3==0 ){
        Try(n/3,dem+1);
        if(cnt[n/3])cnt[n]=min(cnt[n],cnt[n/3]+1);
    }
    if (n%2==0 ){
        Try(n/2,dem+1);
        if(cnt[n/2])cnt[n]=min(cnt[n],cnt[n/2]+1);

    }
    Try(n-1,dem+1);
    cnt[n]=min(cnt[n],cnt[n-1]+1);
}
int main(){
    cnt[1]=1;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Try(n,0);
        cout<<cnt[n]-1<<endl;
    }
}