#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> vc1, vector<int> vc2)
{
    int n1 = vc1.size();
    int n2 = vc2.size();
    vector<int> uni;

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (vc1[i] < vc2[j])
        {
            if (uni.back() != vc1[i] || uni.size() == 0)
            {  
                
                uni.push_back(vc1[i]);
                i++;
            }
        }
        else
        {
            if (uni.back() != vc2[j] || uni.size() == 0)
            {
                uni.push_back(vc2[j]);
                j++;
            }
        }
    }

    while (j < n2)
    {
        if (uni.back() != vc2[j] || uni.size() == 0)
        {
            uni.push_back(vc2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        if (uni.back() != vc2[i] || uni.size() == 0)
        {
            uni.push_back(vc2[i]);
            i++;
        }
    }

    for (int i = 0; i < uni.size(); i++)
    {
        cout << uni[i] << " ";
    }
    
    return uni;
}

int main()
{

    vector<int> vc1 = {1, 1, 1, 2};
    vector<int> vc2 = {3, 4, 5};
    vector<int> vc = fun(vc1, vc2);

}