#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispalin(string s)
{
    if (s.length() == 1)
    {
        return true;
    }

    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }

    return true;
}

string longestpalin(string s)
{

    if (s.length() == 1)
    {
        return s;
    }

    string str;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        str = s[i];
        for (int j = i + 1; j < s.length(); j++)
        {

            str += s[j];
            if (ispalin(str))
            {
                if (ans.length() < str.length())
                {
                    ans = str;
                }
            }
        }
    }

    if (ans.length() == 0)
    {
        ans = s[0];
    }
    return ans;
}

int main()
{

    string str = "ac";
    string p = longestpalin(str);
    cout << p;
}
