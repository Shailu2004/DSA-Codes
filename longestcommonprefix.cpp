#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int isprefix(string str1, string str2)
    {

        auto mismatchIter = std::mismatch(str1.begin(), str1.end(), str2.begin(), str2.end());
        return mismatchIter.first - str1.begin();
    }

    int fun(vector<string> vc1, vector<string> vc2)
    {
        int size = vc1.size();
        int size2 = vc2.size();
        int len = 0;
        int ans = 0;
        int i = 0;
        int j = 0;

        while (i < size && j < size2)
        {

            len = isprefix(vc1[i], vc2[j]);
            ans = max(ans, len);
            j++;
            if (j == size2)
            {
                j = 0;
                i++;
            }
        }

        return ans;
    }
};

int main()
{

    solution s1;
    vector<string> vc1 = {"1", "10", "100"};
    vector<string> vc2 = {"1000"};
    cout << s1.fun(vc1, vc2);
}