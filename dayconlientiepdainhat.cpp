#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair<int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
int di[]={-1,0,0,1};
int dj[]={0,-1,1,0};
//
int n,k;
int check(int a[],int l,int r){
    while(l<=r){
        if(a[l]<a[r])return -1;
        else if(a[l]>a[r])return 1;
        else l++,r--;
    }
    return 0;
}
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    int a[n+1];
    int s=0;
    deque <int> dq;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        dq.push_back(i);
    }
    while(!dq.empty()){
        n=dq.size();
        if(s/n>=k)break;
        int dfront=dq.front();
        int dback=dq.back();
        if(a[dfront]<a[dback]){
            dq.pop_front();
            s-=a[dfront];
        }
        else if(a[dfront]>a[dback]){
            dq.pop_back();
            s-=a[dback];
        }
        else {
            int t=check(a,dfront,dback);
            if(t==-1){
                dq.pop_front();
                s-=a[dfront];
            }
            else if(t==1){
                dq.pop_back();
                s-=a[dback];
            }
            else {
                dq.pop_back();
                s-=a[dback];
            }
        }
    }
    cout<<dq.size();
    return 0;
}
//TheEnd