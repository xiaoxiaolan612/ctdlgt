#include <bits/stdc++.h>
using namespace std;
#define int long long
main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        int a[5005];
        int dem = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1, a + n +1);
        for (int i = 1; i <= n; i++){
            int l = i + 1, r = n;
            while (l < r){
                if (a[i] + a[l] + a[r] < k){
                    dem += (r - l);
                    l++;
                }
                else r--;
            }
        }
        cout << dem << endl;
    }
}
