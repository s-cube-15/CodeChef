#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int q[a];
        for (int i = 0; i < a; i++)
        {
            /* code */ cin >> q[i];
        }
        sort(q, q + a);
        for (int i = 0; i < a; i++)
        {
            /* code */ // cout << q[i];
        }
       

        int s = 0, i;
        i = a-1;
        while (s < b)
        {
            
            s += q[i];
            i--;
        }
      
        i++;
        s = 0;
        cout << i << endl;
        /* code */
    }

    return 0;
}