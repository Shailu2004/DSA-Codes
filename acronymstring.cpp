#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(vector<string> vc, string str)
    {
        int size = vc.size();
        if (size != str.length())
        {
            return false;
        }

        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (str[i] == vc[i][0])
            {
            }
            else
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    solution s1;
    vector<string>vc={"never","gonna","give","up","on","you"};
    cout<<s1.fun(vc,"bbbbbb");
}