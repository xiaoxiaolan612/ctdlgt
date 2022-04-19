#include<bits/stdc++.h>
using namespace std;
void gray(int n, int m) {
    string ret[m+5];
    ret[1]='0';
    ret[2]='1';
    int x=2;
    for(int i=2;i<=n;i++){
        int k=pow(2,i);
        for(int j=1;j<=x;j++){
            ret[k-j+1]='1'+ ret[j];
            ret[j]='0'+ret[j];
        }
        x=k;
    }
    for(int i=1;i<=m;i++){
        cout<<ret[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m= pow(2,n);
        gray(n,m);
        cout<<endl;
    }
}