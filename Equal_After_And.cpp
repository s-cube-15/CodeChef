#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, ct = 0;
    cin >> t;
    while (t--)
    {
        ct = 0;
        cin >> a;
        int arr[a];
        fr(i, 0, a) cin >> arr[i];
        fr(i, 0, a)
        {
            fr(j, 0, a)
            {
                if (arr[i] != arr[j])
                    ct++;
            }
        }
        cout << (ct - 1) / a << endl;
    }
    return 0;
}