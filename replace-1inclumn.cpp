#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(vector<vector<int>> vc)
    {
        int r_size = vc.size();
        int c_size = vc[0].size();

        for (int i = 0; i < r_size; i++)
        {
            for (int j = 0; j < c_size; j++)
            {
                if (vc[i][j] == -1)
                {
                    vc[i][j] = maxi(vc, j);
                }
            }
        }

        for (int k = 0; k < r_size; k++)
        {
            for (int l = 0; l < c_size; l++)
            {
                cout << vc[k][l] << " ";
            }
            cout<<endl;
        }
    }

private:
    int maxi(vector<vector<int>> vc, int index)
    {

        int max_val = INT_MIN;

        for (int i = 0; i < vc.size(); i++)
        {
            max_val = max(max_val, vc[i][index]);
        }

        return max_val;
    }
};

int main()
{

    vector<vector<int>> vc = {{1, 2, -1}, {4, -1, 6}, {7, 8, 9}};
    solution s1;
    s1.fun(vc);
}