#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, s = 1, j;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int d[b];
        for (int i = 0; i < b; i++)
        {
            d[b] = s++;
        }
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
            }
            d[j] = 0;
        }

        for (int i = 0; i < b; i++)
        {
            // for (int i = 0; i < a; i++)
            {
                cout << d[i];
            }
        }
        cout << "\n";
    }

    return 0;
}