#include<bits/stdc++.h>
using namespace std;
int n,k, a[35];
int kt=0,ans=INT_MAX;
int b[35]={0};
void Try(int i,int s,vector<int>ad){
    if(s==k){ 
        int x=ad.size();
        cout<<x<<endl;
        exit(0);
    }
    if(s>k||i>n-1) return;
    ad.push_back(a[i]);
    Try(i+1,s+a[i],ad);
    ad.pop_back();
    Try(i+1,s,ad);
}
int main(){
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        vector <int> ad;
        Try(0,0,ad);
        if(kt==0) cout<<-1;
        else cout<<ans;
}