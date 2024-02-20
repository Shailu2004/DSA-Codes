#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<string> vc)
    {

        int size = vc.size();
        vector<int> ans;
        int test;
        for (int i = 0; i < size; i++)
        {

            if (vc[i] == "C")
            {
                ans.pop_back();
            }
            else if (vc[i] == "D")
            {
                ans.push_back(ans.back() * 2);
            }
            else if (vc[i] == "+")
            {
                int last = ans.back();
                ans.pop_back();
                int second = ans.back();
                ans.push_back(last);
                ans.push_back(second + last);
            }
            else
            {   
                test=stoi(vc[i]);
                ans.push_back(test);
            }
        }

        
            int sum = accumulate(ans.begin(), ans.end(), 0);
            return sum;
    }
};

    int main()
    {

        solution s1;
        vector<string> vc = {"5","2","C","D","+"};
        cout << s1.fun(vc);
    }
