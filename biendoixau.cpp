#include<bits/stdc++.h>
using namespace std;
int qhd(string s1, string s2){
    int c[105][105]={0};
    int n=s1.length(), m=s2.length();
    for(int i=0;i<=n;i++) c[i][0] =i;
    for(int i=0;i<=m;i++) c[0][i] =i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]== s2[j-1]) c[i][j] = c[i-1][j-1];
            else c[i][j] = min(c[i-1][j-1], min(c[i-1][j], c[i][j-1])) +1;
        }
    }
    return c[n][m];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        cout<<qhd(s1,s2)<<endl;
    }
}