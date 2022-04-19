#include<bits/stdc++.h>
using namespace std;
int n,sum=INT_MAX;
int a[100][100],x[100];
//
vector<int>tmp;
void Try(int m,int start,int count, vector<int> d){
    if(count<n&&m<sum){
        for(int i=2;i<=n;i++){
            if(x[i]==0){
                x[i]=1;
                d.push_back(i);
                Try(m+a[start][i],i,count+1,d);
                d.pop_back();
                x[i]=0;
            }
        }
    }
    if(sum>m+a[start][1]&&d.size()==n){
        sum=m+a[start][1];
        d.push_back(1);
        tmp=d;
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>d={1};
    Try(0,1,0,d);
    printf("%.1f\n",(float)sum);
    for(int x:tmp) cout<<x<<" ";
}