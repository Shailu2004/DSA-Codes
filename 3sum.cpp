#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(vector<int> vc)
{
    int n = vc.size();
    sort(vc.begin(), vc.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) //constant values
    {
        if (i > 0 && vc[i] == vc[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = vc[i] + vc[j] + vc[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {vc[i], vc[j], vc[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && vc[j] == vc[j - 1])
                {
                    j++;
                }
                while (j < k && vc[k] == vc[k + 1])
                {
                    k--;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[0].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<int>vc={-1,0,1,2,-1,-4};
    fun(vc);
}