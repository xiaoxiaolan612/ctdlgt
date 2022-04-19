#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x; 
        map<int,int>d;
        for(int i=0;i<n;i++){
            cin>>x;
            d[x]++;
        }
        int maxx=0;
        for(auto y:d){
            maxx=max(maxx,y.second);
        }
        if(maxx<=n/2) cout<<"NO"<<endl;
        else {
            for(auto y:d){
                if(y.second==maxx){
                    cout<<y.first<<endl;
                }
            }            
        }
    }
}