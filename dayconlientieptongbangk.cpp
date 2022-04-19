#include<bits/stdc++.h>
using namespace std;
#define int long long
const int limit = 1e5+5;
int a[limit];
int n,k;
int search(int L, int R, int x){
    while(L<=R){
        int mid =(L+R)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) L= mid+1;
        else R= mid-1;
    }
    return -1;
}
void process(){
    if(k==0){
        for(int i=0;i<n;i++){
            if(a[i]==0) {
                cout<<"YES\n";
                return ;
            }
        }
        cout<<"NO\n";
        return ;
    }
    for(int i=1;i<n;i++) a[i]+= a[i-1];
    for(int i=0;i<n;i++){
        if(a[i]-k==0){
            cout<<"YES\n";
            return ;
        }
        if(a[i]-k>0){
            int id=search(0,n-1,a[i]-k);
            if(id!=-1){
                cout<<"YES\n";
                return ;
            }
        }
    }
    cout<<"NO\n";
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        process();
    }
    return 0;
}