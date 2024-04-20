#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {
        map<int, int> mpp;
        int size = vc.size();
        int need = 0;
        int ans = 0;

        for (int i = 0; i < size; i++)
        {
            mpp[vc[i]]++;
        }

        for (int j = 0; j < size; j++)
        {
            need = vc[j] - k;
            if (mpp[need])
            {
                ans += mpp[need];
            }
        }

        return ans;
    }
};

int main()
{
    solution s1;
    vector<int>vc={1,2,2,1};
    cout<<s1.fun(vc,1);
}