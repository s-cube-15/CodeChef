#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    float t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        c = 1.07 * a;
     //   c += a;
        if (c >= b)
        {
           // cout << c << b;
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}