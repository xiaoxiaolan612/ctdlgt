#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        //le
        int ans=1;
        for (int i = 0; i < s.size(); i++)
        {
            int c = i, d = i;
            while (c >= 0 && d < s.size())
            {
                if (s[c] != s[d])
                    break;
                ans = max(ans, d - c + 1);
                c--;
                d++;
            }
        }
        //chan
        for (int i = 0; i < s.size() - 1; i++)
        {
            int c = i, d = i + 1;
            while (c >= 0 && d < s.size())
            {
                if (s[c] != s[d])
                    break;
                ans = max(ans, d - c + 1);
                c--;
                d++;
            }
        }
        cout << ans<<endl;
    }
}