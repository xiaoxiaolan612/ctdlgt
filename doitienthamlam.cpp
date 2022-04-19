#include<bits/stdc++.h>
using namespace std;
int coin[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void greedy(int value, int ans[], int s){
    for(int i=s-1;i>=0; i--){
        ans[i]=0;
        while(coin[i]<=value){
            value-= coin[i];
            ans[i]++;
        }
    }
}
int main(){
    int s=10;
	int t;
	cin>>t;
	while(t--){
        int n;
		cin>>n;
        int a[s];
        greedy(n,a,s);
        int dem=0;
        for(int i=0;i<s;i++){
            dem+=a[i];
        }
        cout<<dem<<endl;
	}
}