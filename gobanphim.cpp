#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> a, b;
    for(int i=0;i<s.size();i++){
        if(s[i]=='<'){
            if(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
        else if(s[i]=='>'){
            if(!b.empty()){
                a.push(b.top());
                b.pop();
            }
        }
        else if(s[i]=='-'){
            if(!a.empty()) a.pop();
        }
        else a.push(s[i]);
    }
    while(a.size()){
        b.push(a.top());
        a.pop();
    }
    while(b.size()){
        cout<<b.top();
        b.pop();
    }
}