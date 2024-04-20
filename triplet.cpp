#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int diff)
    {
        int more = 0;
        int second_more = 0;
        int size = vc.size();
        int ans = 0;

        for (int i = 0; i < size; i++)
        {
            more = vc[i] + diff;
            if (binary_search(vc.begin() + i, vc.end(), more))
            {
                second_more = more + diff;

                if (binary_search(vc.begin() + i, vc.end(), second_more))
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};

int main()
{
    solution s1;
    vector<int> vc = {4,5,6,7,8,9};
    cout << s1.fun(vc, 2);
}