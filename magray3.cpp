#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(i==0) cout<<s[i];
            else {
                if(s[i]!=s[i-1]) cout<<1;
                else cout<<0;
            }
        }
        cout<<endl;
    }
}