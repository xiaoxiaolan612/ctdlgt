#include <bits/stdc++.h>
using namespace std;
int n, k, m, a[101];
int dem = 0;
vector<string> tmp;
bool check(vector<int>x){
    for(int i=1;i<x.size();i++){
        if(x[i]<x[i-1]) return 0;
    }
    return 1;
}
bool cmp(string x, string y){
        if(x!=y)return x<y;
    return x.size()<y.size();
}
void Try(int id, int s, vector<int> ad,bool ok)
{
    if (s>=2&&!ok&&check(ad))
    {
        ok=1;
        string s="";
        for(int i=0;i<ad.size();i++){
            s+=to_string(ad[i]);
            s+=" ";
        }
        tmp.push_back(s);
    }
    if (id == n)
        return;
    ad.push_back(a[id]);
    Try(id + 1, s + 1, ad,0);
    ad.pop_back();
    Try(id + 1, s, ad,ok);
}
int main()
{
        tmp.clear();
        set<int> c;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ad;
        Try(0, 0, ad,0);
        sort(tmp.begin(),tmp.end(),cmp);
        for(auto vec:tmp){
            for(auto x:vec)cout<<x;
            cout<<endl;
        }
}