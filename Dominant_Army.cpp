#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a > (b + c) || b > (a + c) || c > (a + b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}