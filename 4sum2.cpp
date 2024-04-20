#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
{
    int n = nums1.size();
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    sum = 0;
                    sum = nums1[i] + nums2[j];
                    sum += nums3[k];
                    sum += nums4[l];
                    if (0 <= sum && sum < n)
                    {   
                        if(sum == 0 ){
                        count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}

int main()
{
    vector<int> vc = {1, 2};
    vector<int> vc2 = {-2, -1};
    vector<int> vc3 = {-1, 2};
    vector<int> vc4 = {0, 2};

    cout << fourSumCount(vc, vc2, vc3, vc4);
}