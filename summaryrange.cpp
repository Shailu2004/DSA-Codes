#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(vector<int> vc)
    {

        vector<string> ans;
        int size = vc.size();
        int current;

        for (int i = 0; i < size; i++)
        {
            int first = vc[i];

            while (i + 1 < size && vc[i + 1] == vc[i] + 1)
            {
                i++;
            }

            if (first != vc[i])
            {
                ans.push_back(to_string(first) + "->" + to_string(vc[i]));
            }
            else
            {
                ans.push_back(to_string(first));
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
};

int main()
{
    solution s1;
    vector<int> vc = {0, 2, 3, 4, 6, 8, 9};
    s1.fun(vc);
}