#include <bits/stdc++.h>
using namespace std;

int kt(int n)
{
    if(n%2==0) return 0;
    return 1;
}
int n, k, m, a[101];
int dem = 0;
vector<vector<int>> tmp;
bool cmp(vector<int>x,vector<int>y){
    for(int i=0;i<x.size()&&i<y.size();i++){
        if(x[i]!=y[i])return x[i]<y[i];
    }
    return x.size()<y.size();
}
void Try(int id, int s, vector<int> ad,bool ok)
{
    if (kt(s)&&!ok)
    {
        string str = "";
        sort(ad.begin(),ad.end(),greater<int>());
        ok=1;
        tmp.push_back(ad);

        // return;
    }
    if (id == n)
        return;
    ad.push_back(a[id]);
    Try(id + 1, s + a[id], ad,0);
    ad.pop_back();
    Try(id + 1, s, ad,ok);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tmp.clear();
        set<int> c;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        vector<int> ad;
        Try(0, 0, ad,0);
        sort(tmp.begin(),tmp.end(),cmp);
        for(auto vec:tmp){
            for(auto x:vec)cout<<x<<" ";
            cout<<endl;
        }
        // if (tmp.empty())
        //     cout << endl;
    }
}