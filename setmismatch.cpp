#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//CODE QUALITY IS NOT SO GOOD

class dream
{

public:
    vector<int> fun(vector<int> vc)
    {

        vector<int> ans;
        int size = vc.size();
        int n = vc.size();
        map<int, int> mpp;
        int repeat = 0;
        for (int i = 0; i < size; i++)
        {
            mpp[vc[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second == 2)
            {
                ans.push_back(it.first);
                repeat = it.first;
                break;
            }
        }

        int o_sum = n * (n+1) / 2;
        int sum = 0;


        for (int i = 0; i < size; i++)
        {
            sum += vc[i];
        }

        sum -= repeat;
        int miss = o_sum - sum;
        ans.push_back(miss);

        return ans;
    }

    void display(vector<int> vc)
    {
        int size = vc.size();
        for (int i = 0; i < size; i++)
        {
            cout << vc[i] << " ";
        }
    }
};

int main()
{
    dream d;
    vector<int> vc = {1,1};
    vc = d.fun(vc);
    d.display(vc);
   
}