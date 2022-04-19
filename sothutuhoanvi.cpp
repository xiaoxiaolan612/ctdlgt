#include<bits/stdc++.h>
using namespace std;
int n;
int kt(int a[], vector<int>ad){
    for(int i=0;i<n;i++){
        if(a[i]!=ad[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>ad;
        int dem=1;
        for(int i=1;i<=n;i++) ad.push_back(i);
        if(kt(a,ad)) cout<<1<<endl;
        else{
        while(next_permutation(ad.begin(),ad.end())){
            if(kt(a,ad)) break;
            dem++;
        }
        cout<<dem+1<<endl;            
        }

    }
}