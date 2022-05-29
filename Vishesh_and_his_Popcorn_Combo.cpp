#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, g[3], d, e, f;
    cin >> t;
    while (t--)
    {
        int n = sizeof(g) / sizeof(g[0]);
        cin >>
            a >> b >> c >> d >> e >> f;
        g[0] = a + b;
        g[1] = c + d;
        g[2] = e + f;
        cout << *max_element(g, g + n) << endl;
    }
    return 0;
}