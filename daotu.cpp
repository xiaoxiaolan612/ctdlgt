#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str,s;
        stringstream in;
        getline(cin,str);
        in.str(str);
        stack<string>st;
        string ans;
        while(in>>s){
            st.push(s);
        }
        while(!st.empty()){
            ans+=st.top(); st.pop();
            ans+=" ";
        }
        cout<<ans<<endl;
    }
}