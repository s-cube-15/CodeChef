#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, d, c, e;
    cin >> t;
    string s, a = "code", b = "chef";
    while (t--)
    {
        cin >> d;
        cin >> s;
        c = s.find(a);
        e = s.find(b);
        if (c < e)
        {
            cout << "AC\n";
        }
        else
        {
            cout << "WA\n";
        }
    }

    return 0;
}