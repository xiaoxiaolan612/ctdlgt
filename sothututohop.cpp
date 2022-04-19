#include<bits/stdc++.h>
using namespace std;
int n, k, a[20], ok=0;
int b[20];
int kt(){
    for(int i=1;i<=k;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i==0) ok=1;
    else a[i]++;
    int p=a[i];
    while(i<=k){
        a[i++]=p++;
    }
}
int main(){
    int t;
    cin>>t; 
    while(t--){
        cin>> n >> k;
        for(int i=1;i<=k;i++) cin>>b[i];
        for(int i=1;i<=k;i++) a[i]=i;
        int dem=1;
            while(!ok){
                if(kt()) break;
                sinh();
                dem++;
            }     
            cout<<dem<<endl;  
        ok=0;
    }
}