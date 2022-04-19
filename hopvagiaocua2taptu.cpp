#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
int di[]={-1,0,0,1};
int dj[]={0,-1,1,0};
//
unordered_set<string>dp;
string chuyen(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
    return s;
}
void tach(string s){
    int c=0,d=0;
    while(c<s.size()){
        if(s[c]!=' '){
            while(s[d]!=' '){
                d++;
                if(d==s.size())break;
            }
            string res=s.substr(c,d-c);
            dp.insert(res);
            c=d;
        }
        c++;d++;
    }
}
bool cmp(string a,string b){
    return a<=b;
}
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // cout<<s1<<" "<<s2<<endl;
    s1=chuyen(s1);
    s2=chuyen(s2);
    tach(s1);
    tach(s2);
    vector<string>a;
    for(auto x:dp)a.push_back(x);
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<a.size();i++){
        if(s1.find(a[i])!=-1&&s2.find(a[i])!=-1)cout<<a[i]<<" ";
    }
    return 0;
}
//TheEnd