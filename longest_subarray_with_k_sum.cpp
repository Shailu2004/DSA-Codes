#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int find(vector<int> arr, int k)
{
    int left = 0;
    int right = 0;
    int n = arr.size();
    int sum = arr[0];
    int max_len = 0;

    while (right < n)
    {

        while (left <= right && sum > k) // trim step if sum is greater than k
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {

            
            max_len = max(max_len, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }

    return max_len;
}

int main()
{

    vector<int> arr = {1, 2, 3, 1, 1, 1, 2, 3};
    cout << find(arr, 4);
}