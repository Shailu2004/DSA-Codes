#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool ispalin(string s)
    {

        int size = s.length();

        for (int i = 0; i < size; i++)
        {
            if (s[i] != s[size - 1 - i])
            {
                return false;
            }
        }

        return true;
    }

    string fun(vector<string>vc)
    {
        int size = vc.size();
        for (int i = 0; i < size; i++)
        {
            if(ispalin(vc[i])){
                return vc[i];
            }
        }
        return "";
    }
};

int main()
{
    solution s1;
    vector<string>vc={"abc","car","ada","racecar","cool"};
    cout << s1.fun(vc);
}