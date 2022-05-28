#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a1, b1, c1, a2, b2, c2, t1, t2;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        t1 = a1 + b1 + c1;
        t2 = a2 + b2 + c2;
      
         if (t1 > t2)
        {
            cout << "DRAGON" << endl; /* code */
        }
        else if (t2 > t1)
        {
            /* code */ cout << "SLOTH" << endl;
        }

        else if (t1 == t2)
        {
            if (a1 > a2)
                cout << "DRAGON" << endl;
            else if (a2 > a1)
                cout << "SLOTH" << endl; /* code */

            else if (a1 == a2)
            {
                if (b1 > b2)
                    cout << "DRAGON" << endl;
                else if (b2 > b1)
                    cout << "SLOTH" << endl;

                else if (b1 == b2)
                {
                    if (c1 > c2)
                        cout << "DRAGON" << endl;
                    else if (c2 > c1)
                        cout << "SLOTH" << endl;

                    else if (t1 == t2 && a1 == a2 && b1 == b2 && c1 == c2)
                    {

                        cout << "TIE\n";
                    }
                }
            }
        }
    }

    return 0;
}