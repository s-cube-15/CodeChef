#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            int x = a ^ b;
            if (x < c)
            {
                cout << 1 << endl;
            }
            else
            {
                if (log(x) == log(c))
                {
                    if (ceil(log2(c)) == floor(log2(c)))
                    {
                        cout << -1<< endl;
                    }
                    else
                    {
                        cout << 2 << endl;
                    }
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }

    return 0;
}