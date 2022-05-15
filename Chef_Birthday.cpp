#include <bits/stdc++.h>
using namespace std;
int bin(int n)
{
    int s[32];
    int i = 0;
    while (n > 0)
    {
        s[i] = n % 2;
        n = n / 2;
        i++;
    }
    reverse(s, s + n);
    for (int j = 0; j < i; j++)
    {
        cout << s[j];
    }

    int z[i];
    for (int j = 0; j < i; j++)
    {
        if (s[j] == 0)
        {
            z[i] == 1; /* code */
        }
        else if (s[j] == 0)
        {
            z[i] == 1; /* code */
        }
    }
    // for (int j = 0; j < i; i++)
    {
    }
    return 1;
}
int main()
{
    int t, a, b, c;
    cin >> t;
    bin(t);
    return 0;
}