#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

    int fun(string allowed, vector<string> vc)
    {
        set<int> st(allowed.begin(), allowed.end());
        int flag = 0;
        int count = 0;

        for (auto it : vc)
        {
            flag = 0;
            for (auto ch : it)
            {
                if (st.find(ch) == st.end())
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
}