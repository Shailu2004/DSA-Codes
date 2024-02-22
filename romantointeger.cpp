#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(string s)
    {

        int size = s.length();
        map<char, int> mpp;
        int ans = 0;

        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        for (int i = 0; i < size; i++)
        {
            if (mpp[s[i]] < mpp[s[i + 1]])
            {
                ans -= mpp[s[i]];
            }
            else
            {
                ans += mpp[s[i]];
            }
        }

        return ans;
    }
};
int main()
{

    solution s1;
    cout << s1.fun("MCMXCIV");
}
