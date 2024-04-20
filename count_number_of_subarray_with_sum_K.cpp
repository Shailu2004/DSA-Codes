#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc, int target)
{
    int n = vc.size();
    int sum = 0;
    int count = 0;

    for (int i = 0; i < vc.size(); i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += vc[j];
            if (sum == target)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    vector<int> vc = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    cout << fun(vc, 3);
}            
