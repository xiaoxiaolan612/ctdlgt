#include<bits/stdc++.h>
using namespace std;
int n,k,m, a[101];
int dem=0;
void Try(int i,int s,vector<int>ad){
    if(s==k){
        for(int i=0;i<ad.size();i++) cout<<ad[i]<<" ";
        cout<<endl;        
        return;
    }
    if(s>k||i>m-1) return;
    ad.push_back(a[i]);
    Try(i+1,s+1,ad);
    ad.pop_back();
    Try(i+1,s,ad);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        m=0;
        set<int>c;
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            c.insert(x);
        }
        for(auto x:c) a[m++]=x;
        vector <int> ad;
        Try(0,0,ad);       
    }

}