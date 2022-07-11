#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n, m;
        double ans = 0;
        cin >> n >> m;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (m > 1)
        {
            int y = m - 1;
            for (ll i = n - 1; i < n - 1 - y + 1; i--)
            {
                ans = ans + a[i];
            }
        }
        double p = 0;
        int x = n - m + 1;
        if (x % 2 == 1)
        {
            ans += a[x / 2];
        }
        else
        {
            p += a[x / 2] + a[x / 2 - 1];
            ans += (p) / (2.0);
        }
        cout << "Case #" << i << ": " << fixed << setprecision(6) << x << endl;
    }

    return 0;
}