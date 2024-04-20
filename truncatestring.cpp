#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    string fun(string s, int k)
    {

        int size = s.length();
        int count = 0;
        string ans;

        for (int i = 0; i < size; i++)
        {

            if (s[i] == ' ')
            {
                count++;
            }
            if (count == k)
            {
                ans = s.substr(0, i);
                break;
            }
        }
        if (count < k)
        {
            ans = s;
        }

        return ans;
    }
};

int main()
{
    string str = "Hello";
    solution s1;
    string ptr = s1.fun(str, 4);
    cout << ptr;
}