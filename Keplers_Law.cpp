#include <bits/stdc++.h>
using namespace std;
int main()
{
    float t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;

        if (((a * a) / (c * c * c)) == ((b * b) / (d * d * d)))
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}