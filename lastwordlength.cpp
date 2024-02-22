#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(string vc)
    {

        int ans = 0;
        int size = vc.length();
        int j = 0;

        for (int i = size - 1; i >= 0; i--)
        {
            j = 0;
            while (i >= 0 && vc[i] != ' ')
            {
                j++;
                i--;
            }

            if (j != 0)
            {
                ans = j;
                break;
            }
        }

        return ans;
    }
};

int main()
{
    solution s1;
    string s = "Today is a nice day";
    cout << s1.fun(s);
}