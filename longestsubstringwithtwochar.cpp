#include <bits/stdc++.h>
#include <vector>
#include <fstream>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int st = 0, en = 0;
    while (st < s.length())
    {
        /* code */
    }

    // Write your code here4.
}

class Runner
{
    int t;
    vector<string> S;
    // vector<int> N;
    // vector<vector<int>> Arr;

public:
    void takeInput()
    {
        cin >> t;
        S.resize(t);
        // N.resize(t);
        // Arr.resize(t);
        for (int i = 0; i < t; i++)
        {
            cin >> S[i];
            // cin >> N[i];
            // Arr[i].resize(N[i]);
            // for(int j=0; j<N[i]; j++){
            //     cin >> Arr[i][j];
            // }
        }
    }

    void execute()
    {
        vector<string> cpyS = S;
        // vector<int> cpyN = N;
        // vector<vector<int>> cpyArr = Arr;
        for (int i = 0; i < t; i++)
        {
            int ans = lengthOfLongestSubstring(cpyS[i]);
        }
        vector<string>().swap(cpyS);
        // vector<int>().swap(cpyN);
        // vector<vector<int>>().swap(cpyArr);
    }
    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = lengthOfLongestSubstring(S[i]);
            cout << ans << endl;
        }
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    // freopen("testcases/Large/in/input11.txt", "r", stdin);
    // freopen("testcases/Large/out/output11.txt", "w", stdout);
#endif
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
