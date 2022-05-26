#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;

        if (a < b)
        {
            a = a + c;
        }
        else
        {
            b = b + c;
        }
        if (a < b)
        {
            a = a + d;
        }
        else
        {
            b = b + d;
        }
        if (a >= b)
        {
            cout << "N\n";
        }
        else
            cout << "S\n";
    }
    return 0;
}
