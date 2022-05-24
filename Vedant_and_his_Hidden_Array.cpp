#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == 1)
        {
            if (b % 2 == 0)
            {
                cout << "Even\n";
            }
            else
            {
                cout << "Odd\n";
            }
        }
        else if (b % 2 == 0)
        {
            cout << "Impossible\n";
        }
        else if (a % 2 == 0)
        {
            cout << "Even\n";
        }
        else
            cout << "Odd\n";
    }
    return 0;
}