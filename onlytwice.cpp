#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    int fun(vector<int> vc)
    {
        int size = vc.size();
        int j = 0;

        for (int i = 0; i < size; i++)
        {

            if (j == 0 || j == 1 || vc[j - 2] != vc[i])
            {
                vc[j] = vc[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{

    vector<int> vc = {1, 1, 1, 2, 2, 3};
    dream d;
    cout << d.fun(vc);
}