#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
// #define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
// typedef vector<int> v;
// int di[]={-1,0,0,1,-1,-1,1,1};
// int dj[]={0,-1,1,0,-1,1,-1,1};
//
const int N=1e5+5;
ii a;
int n;
set <ii> s[N];
bool cmp(ii x,ii y){
    return (x.fi<y.fi&&x.se<y.se);
}
bool check(set <ii> &s){
    for(ii x:s){
        if(cmp(x,a))return true;
        else if(x.fi>=a.fi)break;
    }
    return false;
}
int search(int left,int right){
    while(left<right){
        int mid=(left+right)/2;
        if(check(s[mid])){
            left=mid+1;
        }
        else right=mid;
    }
    return left;
}
// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a.fi>>a.se;
        int id=search(0,n);
        if(id<n){
            set<ii>::iterator x=++s[id].insert(a).fi;
            while(x!=s[id].end()){
                if(cmp(a,*x))s[id].erase(x++);
                else x++;
            }
        }
    }
    int ans=0;
    while(ans<n&&!s[ans].empty())ans++;
    cout<<ans;
    return 0;
}
//TheEnd