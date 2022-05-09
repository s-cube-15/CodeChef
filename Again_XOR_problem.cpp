#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    // while (t--)
    //{
    cin >> a >> b;

    string d;
    string ans = "";
    cin >> d;
    string ch[a - b + 1], ch1[(a - b + 2) / 2], ch2[(a - b + 2) / 2];
    for (int i = 0; i <= a - b; i++)
    {
        ch[i] = d.substr(i, b);
    }
    if (b == 1)
    {
        for (int i = 0; i < a - b + 1; i = i + 2)
        {
            if (ch[i] == ch[i + 1])
                ans += "0";
            else
                ans += "1";
        }
    }

    // int q=a-b;
    // for (int i = 0; i <= a - b; i++)
    // {
    //     for (int j = 0; j <= a - b; j++)
    //     {
    //         cout << ch[i][j] << "\n";
    //     }
    // }
    //}
    cout << ans << "\n";

    return 0;
}
