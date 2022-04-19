#include<bits/stdc++.h>
using namespace std;
int main(){
   int t, k=1;
   cin>>t;
   while(t--){
       cin>>k;
       string s;
       cin>>s;
       cout<<k<<" ";
       if(!next_permutation(s.begin(),s.end())) cout<<"BIGGEST\n";
       else {
           cout<<s<<endl;
       }
        
   } 
}