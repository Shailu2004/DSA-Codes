#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> vc, int target)
{

    unordered_map<int, int> mpp;
    int require;

    for (int i = 0; i < vc.size(); i++)
    {
        require = target - vc[i];

        if (mpp.find(require) != mpp.end())
        {
            cout << "Elements presents at: " << mpp[require] << " " << i << " Index";
        }
        else
        {
            mpp[vc[i]] = i;
        }
    }
}

int main()
{

    vector<int> vc = {1, 2, 3, 4, 5, 6};
    fun(vc, 11);
}