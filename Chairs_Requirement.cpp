#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,b) for(int i=a;i<b; i++)
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        cout<<a-b<<endl;
        else cout<<0<<endl;
    }
    return 0;
}