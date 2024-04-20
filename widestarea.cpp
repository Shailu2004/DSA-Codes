#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<vector<int>> vc)
    {
        int size = vc.size();
        sort(vc.begin(), vc.end());
        int diff = 0;
        int ans = 0;

        for (int i = 1; i < size; i++)
        {

            diff = vc[i][0] - vc[i - 1][0];
            ans = max(ans, diff);
        }

        return ans;
    }

    void display(vector<vector<int>> vc)
    {

        for (int i = 0; i < vc.size(); i++)
        {

            for (int j = 0; j < vc[0].size(); j++)
            {

                cout << vc[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    solution s1;
    vector<vector<int>> ans;
    vector<vector<int>> vc = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    cout<<s1.fun(vc);
}