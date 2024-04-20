#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(int n, int i)
    {

        if (i > n)
        {
            return;
        }
        fun(n, i + 1);
        cout << i << " ";
    }
};

int main()
{
    solution s1;
    s1.fun(4, 1);
}