#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc, int k)
    {

        int size = vc.size();
        vector<int> ans;
        ans.push_back(k);

        for (int i = 0; i < size; i++)
        {
            ans.push_back(ans.back() ^ vc[i]);
        }

        return ans;
    }

    void display(vector<int> vc)
    {                                               
        int size = vc.size();
        for (int i = 0; i < size; i++)
        {
            cout << vc[i] << " ";
        }
    }
};

int main()
{
    vector<int>vc={6,2,7,3};
    solution s1;
    vector<int>ans;
    ans=s1.fun(vc,4);
    s1.display(ans);
}