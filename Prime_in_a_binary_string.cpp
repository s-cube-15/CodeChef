#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        b = s.find("10");
        c = s.find("11");
        if (b >= 0 || c >= 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}