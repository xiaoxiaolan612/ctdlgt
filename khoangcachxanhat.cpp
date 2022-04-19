#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5], Max=INT_MIN;
        for(int i=0;i<n;i++) cin>>a[i];
        int RMax[n+5];
        RMax[n-1]= a[n-1];
        for(int i=n-2;i>=0;i--){
            RMax[i]= max(RMax[i+1],a[i]);
        }
        int i=0, j=0;
        while(i<n && j<n){
            if(RMax[j]>a[i]){
                Max= max(Max,j-i);
                j++;
            }
            else i++;
        }
        if(Max==0) cout<<-1<<endl;
        else
            cout<<Max<<endl;
    }
}