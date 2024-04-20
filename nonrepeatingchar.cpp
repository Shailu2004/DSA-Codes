#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(string s)
    {
        unordered_map<char, int> mpp;
        int size = s.length();

        for (int i = size - 1; i >= 0; i--)
        {
            mpp[s[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second == 1)
            {
                return s.find(it.first);
            }
        }

        return -1;
    }
};

int main()
{
    solution s1;
    string str = "leetcode";
    cout << s1.fun(str);
}