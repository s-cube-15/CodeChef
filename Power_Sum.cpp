#include <bits/stdc++.h>
using namespace std;
int t, a, b, q, c, s = 0;
int sum(int d[])
{
    for (int i = 0; i < a; i++)
    {
        /* code */ s = s + d[i];
    }
    return s;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a;
        int d[a];
        for (int i = 0; i < a; i++)
        {
            cin >> d[i];
        }
        q = sum(d);
        c = log2(s);
        cout << c;
        if (c == int(c))
        {
            cout << 0;
        }
        else
        {
        }
    }

    return 0;
}