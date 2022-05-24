#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, p = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        k = k - 1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            
            if (a[i] >= a[k])
            {
                p++;
            }
        }
        cout << p << "\n";
        p=0;
    }
    return 0;
}