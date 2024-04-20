#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    string fun(string s, vector<int> index)
    {
        int size = index.size();
        string ans(size,' ');

        for (int i = 0; i < size; i++)
        {
            ans[index[i]] = s[i];
        }

        return ans;
    }
};

int main()
{
    string str="codeleet";
    vector<int>vc={4,5,6,7,0,2,1,3};
    solution s1;
    string ptr=s1.fun(str,vc);
    cout<<ptr;



}