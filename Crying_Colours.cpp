#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, c = 0, r, g, b, r2, r3, g2, g3, b2, b3;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> r >> g2 >> b2 >> r2 >> g >> b3 >> r3 >> g2 >> b;
        while ((a != r))
        {
            r++;
            c++; /* code */
        }
        while ((a != g))
        {
            g++;
            c++; /* code */
        }
        while ((a != b))
        {
            b++;
            c++; /* code */
        }
        cout<< c << endl;
    }

    return 0;
}