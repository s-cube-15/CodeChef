#include <bits/stdc++.h>
using namespace std;
int main()
{
    float t, b, c = 0;
    int a;
    cin >> t;
    while (t--)
    {
        cin >> a;

        if (a % 2 == 0)
        {
            b = a / 2.0;
            while (b >= 1.0)
            {
                c++;
                b = b / 2;
            }
            cout << c << endl;
        }

        else
            cout << 0 << endl;
        c = 0;
    }

    return 0;
}