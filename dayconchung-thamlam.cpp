#include<bits/stdc++.h>
using namespace std;
int kt=0;
void xuly(int a[], int b[], int c[], int n, int m, int k){
    int i=0, j=0, l=0;
    while(i<n && j<m && l<k){
        if(a[i] == b[j] && b[j] == c[l]){
            cout<<a[i]<<" ";
            i++, j++, l++;
            kt=1;
        }
        else if(a[i] < b[j]) i++;
        else if(b[j] < c[l]) j++;
        else l++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        kt=0;
        int n,m,k;
        cin>>n>>m>>k;
        int a[n+2], b[m+2], c[k+2];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<k;i++) cin>>c[i];
        xuly(a,b,c,n,m,k);
        if(kt==0) cout<<"NO";
        cout<<endl;
    }
}