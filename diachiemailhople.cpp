#include<bits/stdc++.h>
using namespace std;
bool kiemtra(string s){
    bool ok=0;
    int cnt=0,i=0;
    for(int i=0;i<s.size();i++){
        if(!isalnum(s[i])&&s[i]!='.'&&s[i]!='_'&&s[i]!='@')
            return 0;
        if(s[i]=='@')cnt++;
        if(cnt>1)return 0;
    }
    for(i=0;s[i]!='@';i++){
        if(isalnum(s[i]))ok=1;
        if(i>64)return 0;
    }
    if(!ok)return 0;
    cnt=0;ok=0;
    for(int j=i+1;j<s.size();j++){
        if(s[j]=='.')ok=1;
        cnt++;
        if(cnt>254)return 0;
    }
    if(!ok)return 0;
    if(s[s.size()-1]=='.')return 0;
    return 1;
}
main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(kiemtra(s)) cout<<"YES\n";
        else cout<<"NO\n";
    }

}