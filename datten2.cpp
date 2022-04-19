#include<bits/stdc++.h>
using namespace std; 
int n,k;
vector<string>s;
/*Main*/
void Try(int id,string str,int cnt){
    if(cnt==k){
        cout<<str<<endl;
        return ;
    }
    if(id>=s.size())return;
    Try(id+1,str+s[id]+" ",cnt+1);
    Try(id+1,str,cnt);
}
void init(){}
void solution(){
    cin>>n>>k;
    set<string>st;
    for(int i=1;i<=n;i++){
        string x; cin>>x;
        st.insert(x);
    }
    for(auto x:st)s.push_back(x);
    Try(0,"",0);
}
/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    // cin>>t;
    while(t--){
        init();
        solution();
    }
    return 0;
}
/*THE END*/