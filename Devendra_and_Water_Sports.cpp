#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, e;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e;
        int f = a - b;
        int g = c+ d + e;
        if (g <= f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}