#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int d[a];
        for (int i = 0; i < a; i++)
        {
            cin >> d[i];
        }
        b = 0;
        c = 0;
        for (int i = 0; i < a; i++)
        {
            if (d[i] > d[i + 1] && d[i] > d[i - 1])
            {
                b++;
            }
            else if (d[i] < d[i + 1] && d[i] < d[i - 1])
            {
                c++;
            }
        }
        cout << c + d << "\n";
    }

    return 0;
}