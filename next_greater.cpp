#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc1, vector<int> vc2)
    {

        int size = vc1.size();
        vector<int> ans;
        int p;
        for (int i = 0; i < size; i++)
        {
            if (p = find(vc2.begin(), vc2.end(), vc2[i]) != vc2.end())
            {
                if (p < vc2.size() && vc2[p + 1] > vc1[i])
                {
                    ans.push_back(vc2[p + 1]);
                }
                else
                {
                    ans.push_back(-1);
                }
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        return ans;
    }
};

int main()
{
    solution s1;
    vector<int>vc1={4,1,2};
    vector<int>vc2={1,3,4,2};
    s1.fun(vc1,vc2);
}