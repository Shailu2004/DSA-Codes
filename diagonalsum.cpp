#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<vector<int>> vc)
    {

        int r_size = vc.size();
        int sum = 0;

        for (int i = 0; i < r_size; i++)
        {

            if (i == r_size - 1 - i)
            {
                sum += vc[i][i];
                continue;
            }

            // Sum elements of the main diagonal
            sum += vc[i][i];
            // Sum elements of the secondary diagonal
            sum += vc[i][r_size - 1 - i];
        }

        return sum;
    }
};

int main()
{
    solution s1;
    vector<vector<int>> vc = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    cout << s1.fun(vc);
}