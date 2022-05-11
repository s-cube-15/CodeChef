#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c, ct = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        ct = a - 1 + a - 1;
        ct += min(b - 1, c - 1);
        ct += min(a - b, c - 1);
        ct += min(b - 1, a - c);
        ct += min(a - b, a - c);
        cout << ct << endl;
        ct = 0;
    }

    return 0;
}