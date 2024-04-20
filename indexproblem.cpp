#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc, vector<int> index)
    {
        int size = vc.size();
        vector<int> ans;

        for (int i = 0; i < size; i++)
        {
            ans.insert(ans.begin() + index[i], vc[i]);
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
    vector<int> vc = {1,2,3,4,0};

    vector<int> index = {0,1,2,3,0};
    vector<int> ans;
    ans = s1.fun(vc, index);
    s1.display(ans);
}