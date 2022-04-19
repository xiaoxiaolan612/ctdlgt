#include<bits/stdc++.h>
using namespace std;
bool nt(int n){
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int last=1<<(n+1)-1;
        for(int s=1;s<=last;s++){
            int sum=0;
            for(int i=0;i<n;i++)
                if(s>>i&1)sum+=a[i];
            if(nt(sum)){
                for(int i=n-1;i>=0;i--)
                    if(s>>i&1)cout<<a[i]<<" ";
                cout<<endl;
            }
        }
    }
}