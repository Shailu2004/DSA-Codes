#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int product = (nums[size - 1]-1) * (nums[size - 2]-1);

        return product;
    }
};

int main()
{

Solution s1;
vector<int>vc={3,4,5,2};
cout<<s1.maxProduct(vc);


}