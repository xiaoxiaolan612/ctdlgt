#include<bits/stdc++.h>
using namespace std;
int n,k,m, a[20][20];
bool b[20];
vector<int>c;
int x[20];
//vector<vector<int>>d;
/*void in(vector<int>s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}*/
void Try(int i)
{

    int j;

    for (j = 1; j <= n; j++)
    {
        if (b[j] !=true)
        {
            x[i]=j;
            b[j] = true;
            if (i == n){
                m=0;
                for(int l=1;l<=n;l++) m+=a[l][x[l]];
                if(m==k){
                    for(int l=1;l<=n;l++){
                        c.push_back(x[l]);
                    }
                }
            }
            else
                Try(i + 1);
            b[j] = false;
        }
    }
}
int main(){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        Try(1);
        cout<<c.size()/n<<endl;
        for(int i=0;i<c.size();i++){
            if(i%n==0) cout<<endl;
            cout<<c[i]<<" ";
        }
}