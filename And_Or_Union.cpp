#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int d[a], e[a - 1];
        for (int i = 0; i < a; i++)
        {
            cin >> d[i];
        }
        for (int i = 0; i < a; i++)
        {
           
            e[i] = (d[i] & d[i + 1]);
        }
        e[a - 1] = (d[0] & d[a]);
        sort(e, e + a);
        for (int i = 0; i < a; i++)
        {
           
            int s = sizeof(e) / sizeof(e[0]);
            int m = *max_element(e, e + s);
            int n = *min_element(e, e + s);
           
             e[i] = n | m;
            
        }
        cout << e[0] << "\n";
    }

    return 0;
}