#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(vector<vector<int>> vc)
    {
        int size = vc.size();
        int c_size = vc[0].size();
        int start;
        int last;

        for (int i = 0; i < size; i++)
        {

            start = 0;
            last = c_size - 1;

            while (start <= last)
            {
                swap(vc[i][start], vc[i][last]);

                if (start == last)
                {
                    vc[i][start] ^= 1;
                }
                else
                {
                    vc[i][start] ^= 1;
                    vc[i][last] ^= 1;
                }

                start++;
                last--;
            }
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < c_size; j++)
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
    vector<vector<int>> vc = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    s1.fun(vc);
}