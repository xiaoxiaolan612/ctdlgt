#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long dem=0;
        for(int i=0;i<n;i++){
            long long s=k-a[i];
            long long s2=lower_bound(a+i+1,a+n,s)-a; 
            long long c=n-s2;
            if(c>=1) dem+=c;
        }
        cout<<dem<<endl;;
    }
}