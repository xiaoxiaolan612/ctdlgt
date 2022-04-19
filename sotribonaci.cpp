#include <bits/stdc++.h>
using namespace std;
// S31[:v]
#define int long long
#define fi first
#define se second
typedef pair<int, int> ii;
typedef vector<int> v;
typedef vector<vector<int>> vv;
int di[] = {-1, 0, 0, 1};
int dj[] = {0, -1, 1, 0};
//

const int p = 1e15 + 7;
struct matrix
{
    int d[4][4];
};
matrix I;
int mod(int a, int b)
{
    if(b==0)return 0;
    if (b == 1)
        return a;
    int ans = mod((a * 2) % p, b / 2);
    if (b % 2 == 1)
        ans = (ans + a) % p;
    return ans;
}
matrix tich(matrix a, matrix b)
{
    matrix ans;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int s = 0;
            for (int k = 1; k <= 3; k++)
            {
                int dd = mod(a.d[i][k], b.d[k][j]);
                s = (s + dd) % p;
            }
            ans.d[i][j] = s;
        }
    }
    return ans;
}
matrix tong(matrix a, matrix b)
{
    matrix ans;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            ans.d[i][j] = (a.d[i][j] + b.d[i][j]) % p;
        }
    }
    return ans;
}
matrix pow(matrix a, int k)
{
    if (k == 0)
        return I;
    matrix ans = pow(a, k / 2);
    ans = tich(ans, ans);
    if (k % 2 == 1)
        ans = tich(ans, a);
    return ans;
}
matrix dv(matrix a, int k)
{
    int t = 1;
    a = pow(a, k);
    while (t <= 3)
    {
        a.d[t][t] += 1;
        t += 1;
    }
    return a;
}

matrix luythua(matrix a, int k)
{
    if (k == 0)
        return I;
    if (k == 1)
        return a;
    matrix a1 = dv(a, k / 2);
    matrix a2 = luythua(a, k / 2);
    matrix ans = tich(a1, a2);
    if (k % 2 == 1)
    {
        matrix b = pow(a, k);
        ans = tong(ans, b);
    }
    return ans;
}

//
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    I.d[1][1] = 1;
    I.d[1][2] = 0;
    I.d[1][3] = 0;
    I.d[2][1] = 0;
    I.d[2][2] = 1;
    I.d[2][3] = 0;
    I.d[3][1] = 0;
    I.d[3][2] = 0;
    I.d[3][3] = 1;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << 3 << endl;
            continue;
        }
        if (n == 3)
        {
            cout << 6 << endl;
            continue;
        }
        matrix a;
        a.d[1][1] = 1;
        a.d[1][2] = 1;
        a.d[1][3] = 1;
        a.d[2][1] = 1;
        a.d[2][2] = 0;
        a.d[2][3] = 0;
        a.d[3][1] = 0;
        a.d[3][2] = 1;
        a.d[3][3] = 0;
        a = luythua(a, n - 3);
        int d1 = (a.d[1][1] * 3) % p;
        int d2 = (a.d[1][2] * 2) % p;
        int d3 = (a.d[1][3]) % p;
        int gt = (d1 + d2 + d3 + 6) % p;
        cout << gt << endl;
    }
    return 0;
}
// TheEnd