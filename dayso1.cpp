#include<bits/stdc++.h>
using namespace std;
int n, a[20][20],k=0;
void dequy(int i){
    if(i==n+1) return;
    cout<<"[";
    for(int j=1;j<k;j++) cout<<a[i][j]<<" ";
    cout<<a[i][k]<<"]"<<endl;
    for(int j=1;j<k;j++){
        a[i+1][j]=a[i][j]+a[i][j+1];
    }
    k--;
    dequy(i+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[1][i];
        k=n;
        dequy(1);
    }
}