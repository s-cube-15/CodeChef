#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b = 0, c, n;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int s[a];
        int i = 0;
        for (c = 1; c < 1000; c++)
        {
            n = c;
            int binaryNum[32];
            int i = 0;
            while (n > 0)
            {
                binaryNum[i] = n % 2;
                n = n / 2;
                i++;
            }
            for (int j = i - 1; j >= 0; j--)
            {

                if (binaryNum[j] == 1)
                {
                    b++;
                }
            }

            if (b % 2 == 0)
            {
                for (int i = 0; i < a; i++)
                {
                    s[i] = c;
                }
            }for (int i = 0; i < a; i++)
            {
                cout<<s[i];
            }
            
        }
    }
    return 0;
}