#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long s=0;
        cin>>n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<long long>());
        for(int i=0;i<n;i++){
            s+=a[i]*b[i];
        }
        cout<<s<<endl;
    }
}