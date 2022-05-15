#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        /* code */ cin >> a >> b;
        int d[a], s = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> d[i];
        }
        sort(d, d + a, greater<int>());
        for (int i = 0; i < a; i++)
        {
            s = d[i] + s;
            if (s >= b)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
        if (s < b)
            cout << -1 << endl;
        s = 0;
    }

    return 0;
}