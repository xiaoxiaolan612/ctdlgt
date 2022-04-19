#include<bits/stdc++.h>
using namespace std;
int n,k, a[20];
int kt=0;
int b[20]={0};
void Try(int i,int s,vector<int>ad){
    if(s==k){
        cout<<"[";
        for(int j=0;j<ad.size()-1;j++) cout<<ad[j]<<" ";
        cout<<ad[ad.size()-1]<<"] ";
        kt=1;
        return;
    }
    if(s>k||i>n-1) return;
    ad.push_back(a[i]);
    Try(i+1,s+a[i],ad);
    ad.pop_back();
    Try(i+1,s,ad);
}
int main(){
    int t; cin>>t;
    while(t--){
        kt=0;
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        vector <int> ad;
        Try(0,0,ad);
        if(kt==0) cout<<-1;
        cout<<endl;
    }
}