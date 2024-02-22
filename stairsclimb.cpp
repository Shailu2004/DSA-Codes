#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(int n)
    {

        int dp[n + 1];
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }


        return dp[n];
    }
};

int main()
{

    solution s1;
    cout << s1.fun(5);
}