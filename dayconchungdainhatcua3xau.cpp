#include<bits/stdc++.h>
using namespace std;
int C[105][105][105];
string s1, s2, s3;
int n,m,p;
int qhd(){
    memset(C,0,sizeof(C));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=p;k++){
                if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1])
                    C[i][j][k] = C[i-1][j-1][k-1] +1;
                else C[i][j][k] = max(C[i-1][j][k],max(C[i][j-1][k], C[i][j][k-1]));
            }
        }
    }
    return C[m][n][p];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n>>p;
        cin>>s1>>s2>>s3;
        cout<<qhd()<<endl;
    }
}