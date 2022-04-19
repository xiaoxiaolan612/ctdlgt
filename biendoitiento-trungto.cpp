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
        string s;
        cin>>s;
        stack<string>st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='A'&&s[i]<='Z')st.push(string(1,s[i]));
            else{
                string d1=st.top(); st.pop();
                string d2=st.top(); st.pop();
                string res="("+d1+s[i]+d2+")";
                st.push(res);
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}
//TheEnd