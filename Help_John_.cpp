#include <bits/stdc++.h>
using namespace std;
int w = 0;
int pernno(int n)
{
    int a[n], j = 0, su = 0;
    for (int i = 1; i < n; i++)
    {

        if (n % i == 0)
        {
            su += i; // cout << i;
                     //     a[j] == i;
                     //     j++;
                     //     cout << j;
        }
    }
    // for (int i = 0; i < j; i++)
    // {
    //     // cout << a[i] << endl;

    // }

    if (su == n)
    {
        w++;
    }
    return w;
}
int main()
{
    int t, a, b, c;
    cin >> t;
    int q[t];
    for (int i = 0; i < t; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < t; i++)
    {
        pernno(q[i]);
    }
    cout << w;

    return 0;
}