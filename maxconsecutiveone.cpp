#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    int fun(vector<int> vc)
    {

        int size = vc.size();
        if (size == 1 && vc[0] == 0)
        {
            return 0;
        }
        else if (size == 1)
        {
            return 1;
        }
        int count = 1;
        int max_length = 0;

        for (int i = 1; i < size; i++)
        {

            if (vc[i] == vc[i - 1] && vc[i] != 0)
            {
                count++;
                max_length = max(max_length, count);
            }
            else
            {
                count = 1;
            }
        }

        return max_length;
    }
};

int main()
{
    dream d;
    vector<int> vc = {1, 0};
    cout << d.fun(vc);
}