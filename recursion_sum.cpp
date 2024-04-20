#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(int n)
    {
        int ans = 0;
        if (n <= 0)
        {
            return 0;
        }
        ans += n;
        ans += fun(n - 1);

        return ans;
    }
};

int main()
{
    solution s1;
    cout << s1.fun(10);
}