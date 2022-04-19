#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        int s[n+5];
        int ma=INT_MIN;
        for(int i=1;i<=n-k+1;i++){
            s[i]=0;
            for(int j=i;j<i+k;j++){
                s[i]+=a[j];
            }
            ma=max(ma,s[i]);
        }
        int c=0;
        for(int i=1;i<=n-k+1;i++){
            if(ma==s[i]){
                c=i;
                break;
            }
        }
        for(int i=c;i<c+k;i++) {
            cout<<a[i]<<" ";
        }   
        cout<<endl;
    }
}