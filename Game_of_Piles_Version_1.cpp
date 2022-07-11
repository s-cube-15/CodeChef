#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int n, k, t, ct = 0, a, b, c = 0, d, e = 0;
    cin >> t;
    while (t--)
    {
        ct = 0, c = 0;
        cin >> a;
        int arr[a];
        fr(i, 0, a) cin >> arr[i];
        fr(i, 0, a)
        {
            ct += arr[i];
            if (arr[i] == 1)
                c += 1;
        }
        fr(i, 0, n)
        {
            e++;
        }

        fr(i, 0, n)
        {
            d++;
        }
        k = e + d;
        if (c > 0)
            cout << "CHEF" << endl;
        else
        {
            if (ct % 2 == 0)
                cout << "CHEFINA" << endl;
            else
                cout << "CHEF" << endl;
        }
    }

    return 0;
}