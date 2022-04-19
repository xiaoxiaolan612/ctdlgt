#include <bits/stdc++.h>
using namespace std;
string s="ABCDEFGH";
int a[10], n;
char s1;
int b[10]={0};
bool test(){
    for(int i=1;i<n;i++){
        if(s[a[i-1]]!='A'&& s[a[i-1]]!='E'&& s[a[i]]=='A'&&s[a[i+1]]!='A'&& s[a[i+1]]!='E') return 0;
        if(s[a[i-1]]!='A'&& s[a[i-1]]!='E'&& s[a[i]]=='E'&&s[a[i+1]]!='A'&& s[a[i+1]]!='E') return 0;
    }
    return 1;
}
void in()
{
    for (int i = 0; i <=n; i++)
        cout << s[a[i]];
    cout << endl;
}
void Try(int i)
{

    for (int j = 0; j <= n; j++)
    {
        if (b[j] == 0)
        {
            a[i] = j;
            b[j] = 1;
            if (i == n && test())
                in();
            else
                Try(i + 1);
            b[j] = 0;
        }
    }
}

main()
{
        cin >> s1;

        for (int i = 1; i < s.size(); i++)
            if(s1==s[i]) n=i;
        Try(0);
}