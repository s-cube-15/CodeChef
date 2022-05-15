#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (c * d + a > b)
            cout << "overFlow" << endl;
        if (c * d + a < b)
            cout << "Unfilled" << endl;
        if (c * d + a == b)
            cout << "filled" << endl;
    }

    return 0;
}