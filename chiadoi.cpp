#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair<int,int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
//

//
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dp[n+5][n+5];
        memset(dp,0,sizeof(dp));
        // dp[i][j] 
        // i là đầy đủ 
        // j là thiếu
        dp[n][0]=1;
        for(int i=n;i>=0;i--){
            for(int j=n-i;j>=0;j--){
                dp[i][j]+=dp[i][j+1]+dp[i+1][j-1];
            }
        }
        cout<<dp[0][0]<<endl;
    }
    return 0;
}
//TheEnd