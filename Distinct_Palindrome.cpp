#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c, i;

    cin >> t;

    while (t--)
    {

        cin >> a >> b;
        char ch[a];
        if (a % 2 == 0)
        {
            if (b > a / 2)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                int p = 0;
                fr(i, 0, a)
                {
                    if (p == b)
                        p = 0;
                    ch[i] = 'a' + p;
                    ch[a - i - 1] = 'a' + p;
                    p++;
                }
            }
        }
        else
        {
            if (b > ((a / 2) + 1))
            {
                cout << -1 << endl;
                continue;
                /* code */
            }
            else
            {
                int p = 0;
                fr(i, 0, a)
                {
                    if (p == b)
                        p = 0;
                    ch[i] = 'a' + p;
                    ch[a - i - 1] = 'a' + p;
                    p++;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}