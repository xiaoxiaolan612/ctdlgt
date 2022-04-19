#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        s="0"+s;
        for(int i=s.size()-1;i>1;i--){
            if(s[i]>='5'){
                if(s[i]!='9'){
                    s[i-1]++;
                    s[i]='0';
                }
                else{
                    int k=i;
                    while(s[k-1]=='9'&&k>0)s[k--]='0';
                    if(k>0)s[k-1]++;
                    s[k]='0';
                }
            }
            else s[i]='0';
        }
        if(s[0]=='0')s.erase(0,1);
        cout<<s<<endl;
    }
}