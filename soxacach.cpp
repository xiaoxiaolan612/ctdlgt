#include<bits/stdc++.h>
using namespace std;
int n, a[20], b[20]={0};
bool test(int c[]){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1 )return false;
    }
    return true;
}
void in()
{

    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (b[j] == 0)
        {

            a[i] = j;
            b[j] = 1;
            if (i == n){
                if(test(a)){
                    in();
                }
            }

            else
                Try(i + 1);
            b[j] = 0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<endl;
    }
}