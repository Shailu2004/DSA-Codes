#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {

        sort(vc.begin(), vc.end());
        int size = vc.size();
        if (size == 2 || size == 1)
        {
            return vc[size - 1];
        }
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            if (ans.size() == 0 || ans.back() != vc[i])
            {
                ans.push_back(vc[i]);
            }
        }

        return ans[ans.size() - 3];
    }
};

int main()
{

    solution s1;
    vector<int> vc = {2,2,3,1};
    cout << s1.fun(vc);
}