#include<bits/stdc++.h>
using namespace std;
int a[15],x[15],n,k,ok=0;
void in(){
    for(int i=1;i<=k;i++) cout<<a[x[i]]<<" ";
    cout<<endl;
}
void sinh(){
    int i=k;
    while(x[i]==n-k+i) i--;
    if(i==0) ok=1;
    else x[i]++;
    int p=x[i];
    while(i<=k) x[i++]=p++;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ok=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            x[i]=i;
        }
        sort(a+1,a+n+1);
        while(ok==0){
            in();
            sinh();
        }
        cout<<endl;
    }
}