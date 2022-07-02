#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> s;
        fr(i, 0, a)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cout << 'A';
            }
            if (s[i] == '1' && s[i + 1] == '1')
            {
                cout << 'G';
            }
            if (s[i] == '1' && s[i + 1] == '0')
            {
                cout << 'C';
            }
            if (s[i] == '0' && s[i + 1] == '1')
            {
                cout << 'T';
            }

            i++;
        }
        cout << endl;
    }

    return 0;
}