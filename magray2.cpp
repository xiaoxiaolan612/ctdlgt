#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string a="";
        cin>>s;
        a=s[0];
        for(int i=1;i<s.size();i++){
            int n=a.size()-1;
            if(a[n]!=s[i]) a+="1";
            else a+="0";
        }
        cout<<a<<endl;
    }
}