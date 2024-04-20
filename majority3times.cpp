#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> vc)
{

    map<int, int> mpp;
    vector<int> ans;

    for (int i = 0; i < vc.size(); i++)
    {
        mpp[vc[i]]++;
    }

    for(auto it:mpp){
        if(it.second > vc.size()/3){
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{

    vector<int> vc = {3,3};
    vector<int> ans = fun(vc);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}