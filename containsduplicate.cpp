#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    bool fun(vector<int> vc, int k)
    {

        int n = vc.size();
        int sub = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (vc[i] == vc[j])
                {
                    sub = abs(i - j);
                    if (sub <= k)
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }

    bool fun2(vector<int> vc, int k)
    {

        int size = vc.size();
        map<int, int> mpp;
        for (int i = 0; i < size; i++)
        {

            if (mpp.count(vc[i]))
            {
                int sub = abs(i - mpp[vc[i]]);
                if (sub <= k)
                {
                    return true;
                }
                 mpp[vc[i]] = i;
            }
            else
            {
                mpp[vc[i]] = i;
            }
        }
        return false;
    }
};

int main()
{

    dream d;
    vector<int> vc = {1, 0, 1, 1};
    cout << d.fun2(vc, 1);
}