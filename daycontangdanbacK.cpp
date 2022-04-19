#include<bits/stdc++.h>
using namespace std;
int n,k, a[101];
int dem=0;
int kt(vector<int>b){
    for(int i=0;i<b.size()-1;i++){
        if(b[i]>=b[i+1]) return 0;
    }
    return 1;
}
void Try(int i,int s,vector<int>ad){
    if(s==k){
        if(kt(ad)){
            dem++;
            //for(int i=0;i<ad.size();i++) cout<<ad[i]<<" ";
            //cout<<endl; 
        } 
        return;
    }
    if(s>k||i>n-1) return;
    ad.push_back(a[i]);
    Try(i+1,s+1,ad);
    ad.pop_back();
    Try(i+1,s,ad);
}
int main(){
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        vector <int> ad;
        Try(0,0,ad);
        cout<<dem;
}