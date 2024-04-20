#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> vc, vector<int> vc2)
{

    int n = vc.size();
    vector<int> ans;

    int j = 0;
    int i = 0;

    while (i < n)
    {
        if (vc[i] == vc2[j])
        {
            if (ans.size() == 0 || ans.back() != vc[i])
            {
                ans.push_back(vc[i]);
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    return ans;
}

int main()
{

    vector<int> vc1 = {1, 2, 2, 1};
    vector<int> vc2 = {2, 2};

    vector<int> vc = fun(vc1, vc2);

    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << " ";
    }
}