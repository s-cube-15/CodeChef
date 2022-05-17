#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c = 1, j = 1;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        for (int i = 1; i <= b && i <= 10 && c < a; i++)
        {
            c = 2 * j;
            j = c;
        }

        for (int i = 11; i <= b && c < a; i++)
        {
            c = 3 * j;
            j = c;
        }
        if (c > a)
            c = a;
        cout << c << "\n";
        c = 1;
        j = 1;
    }

    return 0;
}