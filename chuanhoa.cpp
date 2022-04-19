#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<string>v;
    while(cin>>s){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        v.push_back(s);
    }
    for(int i=0;i<v.size()-1;i++){
        v[i][0]-=32;
        cout<<v[i];
        if(i<v.size()-2) cout<<" ";
    }
    cout<<", ";
    for(int i=0;i<v[v.size()-1].length();i++) v[v.size()-1][i]-=32;
    cout<<v[v.size()-1];
}