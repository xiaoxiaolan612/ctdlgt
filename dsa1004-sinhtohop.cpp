#include<bits/stdc++.h>
using namespace std;
/*
   ██          ██
   █▒█        █▒█
  █▒███    ███▒█
  █▒████████▒▒█
  █▒████▒▒█▒▒██
  ████▒▒▒▒▒████
   █▒▒▒▒▒▒▒████
  █▒▒▒▒▒▒▒▒████      █
 ██▒█▒▒▒▒▒█▒▒████  █▒█
 █▒█●█▒▒▒█●█▒▒███ █▒▒█
 █▒▒█▒▒▒▒▒█▒▒▒██ █▒▒█
  █▒▒▒=▲=▒▒▒▒███ ██▒█
  ██▒▒█♥█▒▒▒▒███  ██▒█
    ███▒▒▒▒████    █▒█
      ██████        ███
       █▒▒████      ██
       █▒▒▒▒▒████ _██
       █▒██▒██████▒█
       █▒███▒▒▒█████
     █▒████▒▒▒▒████
      █▒███▒██████
*/
int n, k, a[20], kt=0;
void in(){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i==0) kt=1;
    else a[i]++;
    int p=a[i];
    while(i<=k){
        a[i++]=p++;
    }
}
int main(){
    int t;
    cin>>t; 
    while(t--){
        cin>> n >> k;
        for(int i=1;i<=k;i++) a[i]=i;
        while(!kt){
            in();
            sinh();
        }
        cout<<endl;
        kt=0;
    }
}