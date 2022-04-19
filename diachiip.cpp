#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<string>a;
        int c=0,d=0;
        while(c<s.length()){
            if(s[c]>='0'&&s[c]<='9'){
                while(c<s.length()&& s[c]>='0'&&s[c]<='9' ) d++;
                int k1=c,k2=d-c;
                a.push_back(s.substr(k1,k2));
            }
            else c++,d++;           
        }
        for(int i=0;i<a.size();i++){
            f
        }
    }
}