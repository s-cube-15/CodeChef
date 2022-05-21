#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    ll t, a, b, c, l, r, x;
    cin >> t;
    while (t--)
    {
        cin >> a;
        ll arr[a];
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }
        cin >> b;
        while (b--)
        {
            int ct = 0;

            cin >> l >> r >> x;
            for (int i = l; i <= r; i++)
            {
                cout << (arr[i] ^ x) << (arr[i] & x) << endl;

                if ((arr[i] ^ x) > (arr[i] & x))
                {
                    ct++;
                }
            }
            cout << ct << endl;
            ct = 0;
        }
    }

    return 0;
}