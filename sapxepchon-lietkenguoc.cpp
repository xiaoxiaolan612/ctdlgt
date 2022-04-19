#include<bits/stdc++.h>
using namespace std;
void in(vector<int> a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}
vector<vector<int>>d;
int main(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        int m=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[m]){
                m=j;
            }
        }
        swap(a[m],a[i]);
        d.push_back(a);
    }
    for(int i=d.size()-1;i>=0;i--){
        cout<<"Buoc "<<i+1<<": ";
        in(d[i]);
    }
}