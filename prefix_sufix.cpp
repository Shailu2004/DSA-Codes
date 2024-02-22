#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool ispreifx_sufix(string str1, string str2)
    {

        int size1 = str1.length();
        int size2 = str2.length();

        for (int first = 0, last = size1 - 1; first < size1, last >= 0; first++, last--)
        {

            if (str1[first] != str2[first] | str1[last] != str2[size2 - 1 - first])
            {
                return false;
            }
        }

        return true;
    }

    int fun(vector<string> vc)
    {

        int size = vc.size();
        int ans = 0;
        for (int i = 0; i < size-1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (i < size - 1)
                {
                    if (ispreifx_sufix(vc[i], vc[j]))
                    {
                        ans++;
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
    vector<string> vc = {"abab","ab"};
    cout << s1.fun(vc);
}