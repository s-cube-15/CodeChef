#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        int b = 0, c = 0, d = 0;
        cin >> a;
        b = a % 100;
        c = a / 100;
        d += b;
        d += c;
        if (d > 10)
        {
            cout << -1 << endl;
        }
        else
            cout << d << endl;
    }

    return 0;
}