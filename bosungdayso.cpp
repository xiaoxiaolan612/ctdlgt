#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[1000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=1;
    }
    int kt=0;
    for(int i=1;i<=a[n-1];i++){
        if(b[i]==0){
            kt=1;
            cout<<i<<endl;
        }
    }
    if(kt==0) cout<<"Excellent!"<<endl;
}