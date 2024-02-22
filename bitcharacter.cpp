#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(vector<int> vc)
    {

        int size = vc.size();
        bool flag = true;

        for (int i = 0; i < size; i++)
        {
            if (vc[i] == 0 && i == size - 1)
            {
                flag = true;
            }
            else if (vc[i] == 1 && (vc[i + 1] == 1 || vc[i + 1] == 0))
            {
                flag = false;
                i++;
            }
            else
            {
            }
        }
        return flag;
    }
};

int main()
{
    solution s1;
    vector<int> vc = {1, 1, 1, 0};
    cout << s1.fun(vc);
}