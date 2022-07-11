#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int n, k, t, ct = 0, a, b, c, d, e = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        fr(i, 0, n)
        {
            cin >> arr[i];
        }
        fr(i, 0, n)
        {
            e++;
        }
        b = e;
        fr(i, 0, n)
        {
            d++;
        }
        int as = 0;
        fr(i, 0, n)
        {
            as = __gcd(as, abs(arr[i] - (i + 1)));
        }

        cout << as << endl;
    }
    return 0;
}
