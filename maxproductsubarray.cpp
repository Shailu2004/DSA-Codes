#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc)
{
    int sufix = 1;
    int prefix = 1;
    int ans = INT16_MIN;

    for (int i = 0; i < vc.size(); i++)
    {

        prefix *= vc[i];
        sufix *= vc[vc.size() - i - 1];
        ans = max(ans, max(prefix, sufix));
        if (prefix == 0)
        {
            prefix = 1;
        }
        if (sufix == 0)
        {
            sufix = 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> vc = {2, 3, -2, 6, -2};
    cout << fun(vc);
}