#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    float f, t, a, b, c, d, e;
    cin >> t;
    while (t--)
    {
        cin >> a;
        b = a * 50;
        c = .2 * b;
        d = .2 * b;
        e = .3 * b;
        f = c + d + e;

        cout << b - f << endl;
    }

    return 0;
}