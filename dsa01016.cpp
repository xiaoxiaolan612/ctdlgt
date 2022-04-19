#include <bits/stdc++.h>
using namespace std;
/*Start*/
/*
   ██          ██
   █▒█        █▒█
  █▒███    ███▒█
  █▒████████▒▒█
  █▒████▒▒█▒▒██
  ████▒▒▒▒▒████
   █▒▒▒▒▒▒▒████
  █▒▒▒▒▒▒▒▒████      █
 ██▒█▒▒▒▒▒█▒▒████  █▒█
 █▒█●█▒▒▒█●█▒▒███ █▒▒█
 █▒▒█▒▒▒▒▒█▒▒▒██ █▒▒█
  █▒▒▒=▲=▒▒▒▒███ ██▒█
  ██▒▒█♥█▒▒▒▒███  ██▒█
    ███▒▒▒▒████    █▒█
      ██████        ███
       █▒▒████      ██
       █▒▒▒▒▒████ _██
       █▒██▒██████▒█
       █▒███▒▒▒█████
     █▒████▒▒▒▒████
      █▒███▒██████
*/
#define int long long
#define ll long long
#define db double
#define fi first
#define se second

typedef pair<int, int> ii;
typedef vector<int> v;

const ll oo = 1e13;
const int mod = 1e9 + 7;
const int N = 1e6 + 5;

int di[] = {-1, 0, 0, 1, -1, -1, 1, 1};
int dj[] = {0, -1, 1, 0, -1, 1, -1, 1};
/**/
int n;
/*Main*/
vector<v>tmp;
void Try(int d,v a,int s){
    if(s>n) return ;
    if(s==n){
        sort(a.begin(),a.end(),greater<int>());
        tmp.push_back(a);
    }
    for(int i=n;i>=d;i--){
        a.push_back(i);
        Try(i,a,s+i);
        a.pop_back();
    }
}
bool cmp(v x, v y){
    // if(x.size()<y.size())return 1;
    // if(x.size()==y.size()){
        for(int i=0;i<x.size();i++){
            if(x[i]!=y[i]) return x[i]>y[i];
        }
    // }
    return 0;
}
void init() {}
void solution()
{
    tmp.clear();
    cin>>n;
    v a;
    Try(1,a,0);
    sort(tmp.begin(),tmp.end(),cmp);
    for(auto x:tmp){
        cout<<"(";
        for(int i=0;i<x.size();i++){
            cout<<x[i];
            if(i!=x.size()-1)cout<<" ";
        }
        cout<<") ";
    }
    cout<<endl;
}
/**/
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin>>t;
    while (t--)
    {
        init();
        solution();
    }
    return 0;
}
/*THE END*/