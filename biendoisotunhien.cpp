#include <bits/stdc++.h>
using namespace std;
// S31[:v]
// #define int long long
#define fi first
#define se second
typedef pair<int, int> ii;
typedef vector<int> v;
int di[] = {-1, 0, 0, 1, -1, -1, 1, 1};
int dj[] = {0, -1, 1, 0, -1, 1, -1, 1};
//
int BFS(int n)
{
    unordered_map<int, bool> check;
    queue < ii > q;
    q.push({n, 0});
    check[n] = true;
    while (!q.empty())
    {
        ii c = q.front();
        q.pop();
        if (c.fi == 1)
            return c.se;
        int k = c.fi;
        if (!check[k - 1])
        {
            check[k - 1] = true;
            q.push({k - 1, c.se + 1});
        }
        for (int i = 2; i*i<=k; i++)
        {
            if (k % i == 0)
            {
                int dd = max(i, k / i);
                if (!check[dd])
                {
                    check[dd] = true;
                    q.push({dd, c.se + 1});
                }
            }
        }
    }
    return -1;
}
//
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << BFS(n) << endl;
    }
    return 0;
}
// TheEnd