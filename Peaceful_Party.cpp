#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        /* code */ cin >> a >> b >> c;
        a + c > b ? cout << a + c << endl : cout << b << endl;
    }

    return 0;
}