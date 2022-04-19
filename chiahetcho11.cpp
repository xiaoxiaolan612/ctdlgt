#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans=(ans*10+a[i]-48)%11;
        }
        if(ans==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
}