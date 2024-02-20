#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    double fun(vector<int> vc, int k)
    {

        int size = vc.size();
        int left = 0;
        int sum = 0;
        int ans = INT_MIN;
        double p = INT_MIN;

        for (int i = 0; i < size; i++)
        {
            if (i - left == k)
            {
                sum -= vc[left];
                left++;
            }

            sum += vc[i];
            if (i - left + 1 == k)
            {
                p = max(p, (double)sum / k);
            }
        }

        return p;
    }
};

int main()
{
    vector<int> vc = {1, 12, -5, -6, 50, 3};
    solution s1;
    cout << s1.fun(vc, 4);
}
