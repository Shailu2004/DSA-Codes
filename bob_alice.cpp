#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> fun(vector<int> vc)
    {

        int size = vc.size();
        vector<int> ans;
        int alice;
        int bob;
        
        sort(vc.begin(), vc.end());
        for (int i = 0; i < size; i += 2)
        {
            alice = vc[i];
            bob = vc[i + 1];
            ans.push_back(bob);
            ans.push_back(alice);
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

    solution s1;
    vector<int> vc = {5,3};
    vector<int> ans;
    ans = s1.fun(vc);
    s1.display(ans);
}
