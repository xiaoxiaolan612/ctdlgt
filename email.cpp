#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>b;
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        string s2="";
        vector<string>v;
        int c=0, d=0;
        while(c<s.size()){
            if(s[d]>='a'&&s[d]<='z'){
                while(s[d]>='a'&&s[d]<='z') d++;
                int k1=c, k2=d-c;
                v.push_back(s.substr(k1,k2));
                c=d;
            }
            else c++, d++;
        }
        s2+=v[v.size()-1];
        for(int i=0;i<v.size()-1;i++) s2+=v[i][0];
        //cout<<s2<<endl;
        b[s2]++;
        if(b[s2]==1) cout<<s2<<"@ptit.edu.vn"<<endl;
        else cout<<s2<<b[s2]<<"@ptit.edu.vn"<<endl;
    }
}