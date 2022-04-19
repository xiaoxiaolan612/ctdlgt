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
        stack<int> a;
        for (int i = 0; i <= s.length(); i++)
        {
            a.push(i + 1);
            if (i == s.length() || s[i] == 'I')
            {
                while (!a.empty())
                {
                    cout << a.top();
                    a.pop();
                }
            }
        }
        cout << endl;
    }
}