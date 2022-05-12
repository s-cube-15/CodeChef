#include <bits/stdc++.h>
#define ll long long
#define fr(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int d[a], e[a];
        fr(i, 0, a)
        {
            cin >> d[i];
        }
        fr(i, 0, a)
        {
            cin >> e[i];
        }
        map<pair<int, int>, int> mp;
        ll ans = 0;
        fr(i, 0, a)
        {
            ans = ans + mp[{d[i], e[i]}];
            mp[{e[i], d[i]}]++;
        }
        cout << ans << endl;
        
    }
    return 0;
}