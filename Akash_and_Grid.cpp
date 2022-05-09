#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> y;
        b = (a + 1) / 2;
        c = (a + 1) / 2;
        if ((x + y) % 2 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}