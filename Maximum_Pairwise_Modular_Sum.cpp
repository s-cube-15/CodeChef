#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        int mx = INT_MIN;
        cin >> a >> b;
        int arr[a];
        fr(i, 0, a) cin >> arr[i];
        fr(i, 0, a)
        {
            fr(j, 0, a)
            {
                if (mx <= (arr[i] + arr[j] + ((abs(arr[i] - arr[j])) % b)))
                {
                    mx = (arr[i] + arr[j] + ((abs(arr[i] - arr[j])) % b));
                    cout << arr[i] << arr[j] << mx << endl;
                }
            }
        }
        cout << mx << endl;
    }

    return 0;
}