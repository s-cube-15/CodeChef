#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d = 1;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int s[a], q[a];
        for (int i = 1; i <= a; i++)
        {
            s[i] = i;
        }
        for (int i = 1; i <= a; i++)
        {
            cout << s[i] << endl;
        }

        for (int j = 0; j < b; j++)
        {
            for (int i = 1; i <= a; i = i + 2, d++)
            {
                s[d] = s[i];
            }

            for (int i = 2; i <= a; i = i + 2, d++)
            {
                s[d] = s[i];
            }
        }
        for (int i = 1; i <= a; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;d=1;
    }
    return 0;
}