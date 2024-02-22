#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(string s)
    {

        int size = s.length();
        string str = "";
        string rev = "";

        for (int i = 0; i < size; i++)
        {

            if (isalnum(s[i]))
            {
                str += tolower(s[i]);
                rev += tolower(s[i]);
            }
        }

        reverse(rev.begin(), rev.end());
        if (str == rev)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{

solution s1;
cout<<s1.fun("A man, a plan, a canal: Panama");


}