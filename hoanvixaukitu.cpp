#include <bits/stdc++.h>

using namespace std;

int A[15], n;
bool B[15];
string s;
void in()
{

    for (int i = 1; i <= n; i++)
        cout << s[A[i]];
    cout << " ";
}
void Try(int i)
{

    int j;
    for (j = 1; j <= n; j++)
    {
        if (B[j] == false)
        {

            A[i] = j;
            B[j] = true;
            if (i == n)
                in();

            else
                Try(i + 1);
            B[j] = false;
        }
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        n=s.size();
        s=" "+s;
        
        for (int i = 1; i < n; i++)
            B[i] = false;

        Try(1);
        cout << endl;
    }
}