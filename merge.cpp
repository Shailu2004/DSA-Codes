#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void find(vector<int> arr1, vector<int> arr2)
{

    int m = arr1.size();
    int n = arr2.size();

    multiset<int> mpp;

    for (int i = 0; i < m; i++)
    {
        if (arr1[i] == 0)
            continue;
        mpp.insert(arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == 0)
            continue;
        mpp.insert(arr2[i]);
    }

    for (auto it : mpp)
    {
        cout << it << " ";
    }
}

int main()
{

    vector<int> arr1 = {0};
    vector<int> arr2 = {1};

    find(arr1, arr2);
}