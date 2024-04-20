#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {

        int size = vc.size();
        int elesum = 0;
        int sum = 0;
        string str;

        for (int i = 0; i < size; i++)
        {
            sum += vc[i];
            if (vc[i] >= 10)
            {
                str = to_string(vc[i]);
                for (char ch : str)
                {
                    elesum += ch - '0';
                }
            }
            else
            {
                elesum += vc[i];
            }
        }

        return sum-elesum;
    }
};

int main()
{
    vector<int>vc={1,2,3,4};
    solution s1;
    cout<<s1.fun(vc);
}