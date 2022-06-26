#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> a;
        cin >> s;
        for (int i = 0; i < a; i++)
        {
            if (s[i] == 'A')
            {
                cout << "T";
            }
            else if (s[i] == 'T')
            {
                /* code */ cout << "A";
            }
            else if (s[i] == 'C')
            {
                /* code */ cout << "G";
            }
            else if (s[i] == 'G')
            {
                /* code */ cout << "C";
            }
        }
        cout << endl;
    }

    return 0;
}