#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    float t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        c = a - b;
        if (c <= 0)
            cout << 0 << endl;
        else
            cout << ceil(c / 4) << endl;
    }

    return 0;
}