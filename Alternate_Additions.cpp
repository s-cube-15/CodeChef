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
        while(a<=b)
     {
           if(a%2==0)
        {
            a=a+2;
        }
        else a++;
        if(a==b)cout<<"YES"<<endl;
        
    }if(a>b)
        cout<<"NO"<<endl;

    }
    return 0;
}