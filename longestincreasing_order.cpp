#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {
        int ans = 1;
        int count = 1;
        int size = vc.size();

        for (int i = 0; i < size - 1; i++)
        {

            if (vc[i + 1] > vc[i])
            {
                count++;
                ans = max(count, ans);
            }
            else
            {

                ans = max(count, ans);
                count = 1;
            }
        }

        return ans;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {1, 3, 5, 7};
    cout << s1.fun(vc);
}
