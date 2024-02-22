#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(vector<string> vc1, vector<int> vc2)
    {

        int size = vc2.size();
        vector<string> ans(size);
        multimap<int, int, greater<int>> mpp;

        for (int i = 0; i < size; i++)
        {
            mpp.insert({vc2[i], i});
        }

        int j = 0;
        for (auto it : mpp)
        {
            ans[j] = vc1[it.first];
        }

        for (int i = 0; i < size; i++)
        {
            cout << ans[i] << " ";
        }
    }
};

int main()
{   
    solution s1;
    vector<int>vc={180,165,170};
    vector<string>vc1={"Mary","John","Emma"};
    s1.fun(vc1, vc);

}