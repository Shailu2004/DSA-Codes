#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc1, vector<int> vc2)
    {

        int size = vc1.size();
        sort(vc1.begin(), vc1.end());
        sort(vc2.begin(), vc2.end());
        vector<int> ans;

        int i = 0, j = 0;
        while (i < vc1.size() && j < vc2.size())
        {

            if (vc1[i] == vc2[j])
            {
                if (ans.empty() || ans.back() != vc1[i])
                {
                    ans.push_back(vc1[i]);
                }
                i++;
                j++;
            }
            else if (vc1[i] < vc2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
         
        
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

    solution s1;
    vector<int> vc1 = {1,2,2,1};
    vector<int> vc2 = {2,2};
    vector<int> ans;
    ans = s1.fun(vc1, vc2);
    s1.display(ans);
}