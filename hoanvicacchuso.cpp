#include<bits/stdc++.h>
using namespace std; 
const int N=1e6+5;
int n,k;
string s[N];
int id[N];
int solve(){
    vector<int>val;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum=sum*10+(s[i][id[j]]-'0');
        }
        val.push_back(sum);
    }
    sort(val.begin(),val.end());
    return val[n-1]-val[0];
}
void solution(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=0;i<k;i++)id[i]=i;
    int ans=INT_MAX;
    do{
        ans=min(ans,solve());
    }while(next_permutation(id,id+k));
    cout<<ans<<endl;
}
/**/
main(){
    int t=1;
    // cin>>t;
    while(t--){
        //init();
        solution();
    }
    return 0;
}
