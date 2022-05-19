#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > 1)
        {
            if (a % 2 == 0 && b % 2 == 0)
            {
                c = a / 2;
                d = b / 2;
                cout << c * d << "\n";
            }
            if (a % 2 != 0 && b % 2 == 0)
            {
                c = a / 2 + 1;
                d = b / 2;
                cout << c * d << "\n";
            }
            if (a % 2 == 0 && b % 2 != 0)
            {
                c = a / 2;
                d = b / 2 + 1;
                cout << c * d << "\n";
            }
            if (a % 2 != 0 && b % 2 != 0)
            {
                c = a / 2 + 1;
                d = b / 2 + 1;
                cout << c * d << "\n";
            }
        }
        else if (a == 1)
        {
            if (b % 2 != 0)
            {
                d = b / 2 + 1;
                cout << a * d << "\n";
            }
            if (b % 2 == 0)
            {
                d = b / 2;
                cout << a * d << "\n";
            }
        }
        else if (b == 1)
        {
            if (a % 2 != 0)
            {
                d = a / 2 + 1;
                cout << b * d << "\n";
            }
            if (a % 2 == 0)
            {
                d = a / 2;
                cout << b * d << "\n";
            }
        }
    }

    return 0;
}