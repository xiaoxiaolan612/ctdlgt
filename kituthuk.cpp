#include<bits/stdc++.h>
using namespace std;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int check(int id,int len,int k){
    len/=2;
    id--;
    if(k==len+1)return id;
    else if(k>len+1)k-=len+1;
    return check(id,len,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int len=1,id=n;
        while(--n)len=len*2+1;
        id=check(id,len,k);
        cout<<s[id]<<endl;
    }
}