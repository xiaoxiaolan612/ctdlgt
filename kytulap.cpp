#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
const ll oo = 1e13;
const int N = 1e6 + 5;
/**/
int n;
int id[N];
string s[N];
int dp[100][100];
/*Main*/
int count(string x, string y)
{
    int cnt = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (binary_search(y.begin(), y.end(), x[i]))
            cnt++;
    }
    return cnt;
}
int solve()
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cnt += dp[id[i]][id[i + 1]];
    }
    return cnt;
}
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        id[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            dp[i][j] = dp[j][i] = count(s[i], s[j]);
        }
    }
    int cnt = oo;
    do
    {
        cnt = min(cnt, solve());
    } while (next_permutation(id + 1, id + n + 1));
    cout << cnt << endl;
}