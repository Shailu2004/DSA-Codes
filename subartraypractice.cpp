#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc, int k)
{

    int n = vc.size();
    int sum = vc[0];
    int left = 0;
    int right = 0;
    int max_length = 0;

    while (right < n)
    {        

        while (left <= right && sum > k) // trim step
        {
            sum -= vc[left];
            left++;
        }

        if (left <= right && sum == k)
        {
            max_length = max(max_length, right - left + 1);
        }
        right++;
        if(right < n){
            sum +=vc[right];
        }
    }

    return max_length;
}

int main()
{
    vector<int> vc = {1, 2, 3, 1, 1, 1, 2, 3};
    cout<<fun(vc,4);
}                                    
