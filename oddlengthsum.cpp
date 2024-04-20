#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {

        int size = vc.size();
        int ans=0;

        for (int i = 0; i < size; i++)
        {

            for (int j = i; j < size; j++)
            {

                if ((j - i + 1) % 2 != 0)
                {
                    for (int k = i; k <= j; k++)
                    {
                        ans += vc[k];
                    }
                }
            }
            
        }

        return ans;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {1, 4, 2, 5, 3};
    cout << s1.fun(vc);
}