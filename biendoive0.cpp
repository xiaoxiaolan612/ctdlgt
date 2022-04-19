#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair<int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
//
unordered_map<int,int>d;
int scs(int n){
    int s=0;
    while(n>9){
        n/=10;
        s++;
    }
    return s;
}
int count(int x){
    int c=0,last=x;
    while(last){
        int dd=scs(last);
        int res=1;
        while(dd--)res*=10;
        int first=last/res;
        int lastnumber=first*res;
        int skip=(last-lastnumber)/first;
        skip++;
        c+=skip;
        last=last-(first*skip);
    }
    return c;
}
void era(){
    for(int i=1;i<=1e6;i++){
        int k=count(i);
        d[k]=max(d[k],i);
    }
}
//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    era();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<d[n]<<endl;
    }
    return 0;
}
//TheEnd