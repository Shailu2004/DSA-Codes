#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    vector<int> fun(vector<int> vc1, vector<int> vc2)
    {

        int i = 0;
        int j = 0;
        set<int> ans;

        int n1 = vc1.size();

        while (i < n1)
        {
            if (vc1[i] == vc2[j])
            {
               ans.insert(vc)
            }
            else
            {
                i++;
            }
        }

        for (int k = 0; k < ans.size(); k++)
        {
            cout << ans[i] << " ";
        }

        return ans;
    }
};

int main()
{

    dream d;
    vector<int> vc2 = {2, 2};
    vector<int> vc1 = {1, 2, 2, 1};
    d.fun(vc2, vc1);
}