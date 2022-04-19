#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, y, z, f[105]={0};
        cin>>n>>x>>y>>z;
        f[1]=x;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                f[i]= min(f[i-1] + x, f[i/2] +z);
            }
            else f[i] = min(f[i-1]+x, f[(i+1)/2] + z + y);
        }
        cout<<f[n]<<endl;
    }
}