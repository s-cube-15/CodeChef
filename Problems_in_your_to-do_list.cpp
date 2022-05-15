#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a, b, c = 0;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> a;
        int arr[a];
        fr(i, 0, a) cin >> arr[i];
        fr(i, 0, a) if (arr[i] >= 1000)
        {
            /* code */ c++;
        }
        cout << c << endl;
    }

    return 0;
}