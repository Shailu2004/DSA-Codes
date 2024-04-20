#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc, int target)
{

    int xor_ans = 0;
    int count = 0;

    for (int i = 0; i < vc.size(); i++)
    {
         xor_ans=0;
        for (int j = i; j < vc.size(); j++)
        {

            xor_ans ^= vc[j];
            if (xor_ans == target)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{

    vector<int> vc = {4, 2, 2, 6, 4};
    cout << fun(vc, 6);
}