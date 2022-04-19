#include <bits/stdc++.h>

using namespace std;

int n, c[1005], p[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};

long long kq;
void quaylui(int i, long long x)
{
    int j;
    for (j = 1; j <= min(n - 1, c[i - 1]); j++)
    {
        x *= p[i];
        if (x >= kq && kq != -1)
            break;
        if (n % (j + 1) == 0)
        {
            c[i] = j;

            n /= (j + 1);
            if (n == 1)
                kq = x;

            else
                quaylui(i + 1, x);
            n *= (j + 1);
        }
    }
}

main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        kq = -1;
        c[0] = n - 1;
        if (n > 1)
            quaylui(1, 1);
        else
            kq = 1;
        cout << kq << endl;
    }
}