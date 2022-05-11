#include <bits/stdc++.h>

#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c, ct = 0;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int d[a], e[a];
        fr(i, 0, a)
        {
            cin >> d[i];
        }
        fr(i, 0, a)
        {
            cin >> e[i];
        }
        for (int i = 1; i <= a; i++)
        {

            {
                if (d[i] == e[a - i] && d[a - 1] == e[i])
                    ct++;
            }
        }
        cout << ct << endl;
        ct = 0;
    }

    return 0;
}