#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{
public:
    vector<int> fun(vector<int> vc)
    {
        vector<int> ans;
        sort(vc.begin(), vc.end());
        for (int i = 1; i <= vc.size(); i++)
        {
            if (binary_search(vc.begin(), vc.end(), i))
            {
            }
            else
            {  

                ans.push_back(i);
            }
        }

        return ans; 
    }
};

int main()
{
    dream d;
    vector<int> vc = {1,1};
    vector<int> ip;
    ip = d.fun(vc);

    for (int i = 0; i < ip.size(); i++)
    {
        cout << ip[i] << " ";
    }
}

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         for(int i = 1; i <= size(nums); i++)
//             if(find(begin(nums), end(nums), i) == end(nums))  // linear search in nums for each i
//                 ans.push_back(i);
//         return ans;
//     }
// };