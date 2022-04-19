#include<bits/stdc++.h>
using namespace std; 
//S31[:v]
#define int long long 
#define fi first
#define se second
typedef pair <int,int> ii;
typedef vector<int> v;
int di[]={-1,0,0,1,-1,-1,1,1};
int dj[]={0,-1,1,0,-1,1,-1,1};
//

// 
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int a[n][n],s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x=0,y=0,k=0;
            while(k<=i&&k<=j&&i+k<n&&j+k<n){
                x+=a[i-k][j-k]+a[i+k][j+k];
                y+=a[i-k][j+k]+a[i+k][j-k];
                s=max(s,x-y);
                k++;
            }
            x=0,y=0,k=0;
            while(k<=i&&k<=j&&i+k+1<n&&j+k+1<n){
                x+=a[i-k][j-k]+a[i+k+1][j+k+1];
                y+=a[i-k][j+k+1]+a[i+k+1][j-k];
                s=max(s,x-y);
                k++;
            }
        }
    }
    cout<<s;
    return 0;
}
//TheEnd