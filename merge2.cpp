#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &vc1, vector<int> &vc2)
{

    int n1 = vc1.size();
    int n2 = vc2.size();

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j<n2)
    {
        if (vc1[i] <= vc2[j])
        {
            i++;
        }
        else if (vc1[i] > vc2[j] )
        {
            swap(vc1[i], vc2[j]);
            while (k < n2-1 && vc2[k] > vc2[k + 1])
            {
                swap(vc2[k], vc2[k + 1]);
                k++;
            }
            k=0;
        }
        else
        {
            i++;
        }
    }

    for (int p = 0; p < n1; p++)
    {
        cout << vc1[p] << " ";
    }

    for (int q = 0; q < n2; q++)
    {
        cout << vc2[q] << " ";
    }
}

int main()
{

    vector<int> vc = {1};
    vector<int> vc2 = {0};
    fun(vc, vc2);
}
