#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(vector<int> vc, int n)
    {

        int size = vc.size();
        if (n == 0)
        {
            return true;
        }
        for (int i = 0; i < size; i++)
        {
            if (vc[i] == 0)
            {
                if (vc[i] == 0 && (i == 0 || vc[i - 1] == 0) &&
                    (i == vc.size() - 1 || vc[i + 1] == 0))
                {
                    vc[i] = 1;
                    n--;
                }
            }

            if (n == 0)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    solution s1;
    vector<int> vc = {0, 1, 0};
    cout << s1.fun(vc, 1);
}
