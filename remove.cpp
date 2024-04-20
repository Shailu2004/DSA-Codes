#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc, int value)
{

    int index = 0;

    for (int i = 0; i < vc.size(); i++)
    {
        if (vc[i] != value)
        {
            vc[index] = vc[i];
            index++;
        }
    }

    return index;
}

int main()
{

    vector<int> vc = {3,2,2,3};
    cout << fun(vc, 3);
}