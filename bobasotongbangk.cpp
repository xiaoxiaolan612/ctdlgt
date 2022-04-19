#include<bits/stdc++.h>
using namespace std;
#define int long long
int search(int a[],int b, int left, int right){
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==b) return 1;
        else if(a[mid]<b) left=mid+1;
        else right = mid-1;
    }
    return 0;
}
main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int kt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=a[i]+a[j];
                    if(search(a,k-d,j+1,n-1)){
                        kt=1;
                        break;
                    } 
            }
            if(kt==1) break;
        }
        if(kt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}