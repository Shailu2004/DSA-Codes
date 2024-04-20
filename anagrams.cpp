#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool isanagram(string str1, string str2)
    {

        int size2 = str2.length();
        int size1 = str1.length();
        string str = "";
        vector<string> vc;

        for (int i = 0; i <= size2; i++)
        {

            if (str2[i] == ' ' || i == size2)
            {
                vc.push_back(str);
                str = "";
                continue;
            }
            str += str2[i];
        }

        for (int j = 0; j < size1 / 2; j++)
        {
            if (str1[j] == str1[size1 - 1 - j])
            {
                if (vc[j] != vc[size1 - 1 - j])
                {
                    return false;
                }
            }
            else if (str1[j] != str1[size1 - 1 - j])
            {
                if (vc[j] == vc[size1 - 1 - j])
                {
                    return false;
                }
            }
            else
            {
            }
        }

        return true;
    }
};

int main()
{
    solution s1;

    cout << s1.isanagram("aaaa", "dog cat cat dog");
}