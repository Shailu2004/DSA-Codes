#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<vector<int>> vc, int n)
    {

        int size = vc.size();
        vector<int> ans(n + 1);

        for (int i = 0; i < size; i++)
        {
            ans[vc[i][0]]--;
            ans[vc[i][1]]++;
        }

        for (int j = 0; j < ans.size(); j++)
        {
            if (ans[j] == n - 1)
            {
                return j;
            }
        }

        return -1;
    }
};

int main()
{

    solution s1;
    vector<vector<int>> vc = {
        {1, 2},
        {2, 3},
    };
    cout << s1.fun(vc, 3);
}

//[[1,3],[1,4],[2,3],[2,4],[4,3]]
// 3