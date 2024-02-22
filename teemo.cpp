#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {

        int size = vc.size();
        int dis;
        int ans = k;

        for (int i = 0; i < size - 1; i++)
        {

            dis = vc[i + 1] - vc[i];
            if (dis >= k)
            {
                ans += k;
            }
            else
            {
                ans += dis;
            }
        }

        return ans;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {1, 4};
    cout << s1.fun(vc, 2);
}