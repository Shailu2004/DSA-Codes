#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

    int performer(int index, int capacity, vector<int> &vc, vector<vector<int>>&dp)
    {

        if (capacity == 0)
        {
            return 0;
        }
        if (index == 0)
        {
            return vc[0] * capacity;
        }

        int take = 0;
        int n_take = 0;

        if (dp[index][capacity] != -1)
        {
            return dp[index][capacity];
        }

        if (index + 1 <= capacity)
        {
            take = vc[index] + performer(index, capacity - (index + 1), vc, dp);
        }

        n_take = 0 + performer(index - 1, capacity, vc, dp);

        return dp[index][capacity] = max(take, n_take);
    }

public:
    int fun(vector<int> vc, int k)
    {
        int size = vc.size();
        vector<vector<int>> dp(size, vector<int>(k + 1, -1));
        return performer(size - 1, k, vc,dp);
    }
};

int main()
{

    solution s1;
    vector<int> vc = {3, 5, 8, 9, 10, 17, 17, 20};
    cout << s1.fun(vc, 8);
}