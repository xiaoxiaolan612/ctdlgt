#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
int di[]={-1,0,0,1};
int dj[]={0,-1,1,0};
//

//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int res=0;
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push('(');
                if(s[i]==')')res++;
            }
            else if(s[i]=='(')st.push(s[i]);
            else {
                if(st.top()==')')st.push('('),res++;
                else st.pop();
            }
        }
        int n=st.size();
        cout<<n/2+res<<endl;
    }
    return 0;
}
//TheEnd