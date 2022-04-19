#include<bits/stdc++.h>
using namespace std;
int n,k;
string s=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        int a[k+1];
        for(int i=1;i<=k;i++) a[i]=i;
        while(1){
            for(int i=1;i<=k;i++) cout<<s[a[i]];
            cout<<endl;
            int i=k;
            while(a[i]==n-k+i) i--;
            if(i==0) break;
            else a[i]++;
            int t=a[i];
            while(i<=k) a[i++]=t++;
        }
    }
}