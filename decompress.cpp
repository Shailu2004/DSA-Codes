#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc)
    {

        int size = vc.size();
        vector<int> ans;
        int next_ele;
        int mover;

        for (int i = 0; i < size; i +=2)
        {
            next_ele = vc[i + 1];
            mover = 0;
            while (mover < vc[i])
            {
                ans.push_back(next_ele);
                mover++;
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
    vector<int> vc = {1,1,2,3};
    vector<int> ans;
    ans = s1.fun(vc);
    s1.display(ans);
}