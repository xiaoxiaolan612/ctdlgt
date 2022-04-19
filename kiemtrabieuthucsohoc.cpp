#include<bits/stdc++.h>
using namespace std;
int check(string s){
    stack<int> st;
    int j;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            j=st.top(); st.pop();
            if(i-j==2) return 1;
            if(s[j+1]=='(' && s[i-1]==')')return 1;
        }
    }
    return 0;
}
main(){
    int t;
    string s;
    cin>>t;
    cin.ignore(1);
    while(t--){
        getline(cin,s);
        if(check(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}