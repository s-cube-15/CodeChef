#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n, a, b;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int i = 0, j = n - 1, answer = 0;
        while (j >= i)
        {
            if (s[i] == '(' and s[j] == ')')
            {
                i++;
                j--;
            }
            else if (s[i] == '(' and s[j] == '(')
            {
                j--;
                answer++;
            }
            else if (s[i] == ')' and s[j] == '(')
            {
                j--;
                answer++;
            }
            else if (s[i] == ')' and s[j] == ')')
            {
                answer++;
                i++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}