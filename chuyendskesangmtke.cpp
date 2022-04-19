#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    string s;
    int a[1001][1001];
    vector<int> ds[100];
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s += " ";
        int so = 0;
        int j = 0;
        while (j < s.size())
        {
            if (s[j] >= '0' && s[j] <= '9')
                so = 10 * so + (int)(s[j] - 48);
            else if (so > 0)
            {
                ds[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j, ds[i].size(); j++)
        {
            a[i][ds[i][j]] = a[ds[i][j]][i] = 1;
        }
    }
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
