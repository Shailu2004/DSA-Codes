#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc)
{

    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < vc.size(); i++)
    {

        sum += vc[i];
        max_sum = max(sum, max_sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }


    return max_sum;
}

int main()
{

vector<int>vc={-2,-3,4,-1,-2,1,5,-3};
cout<<fun(vc);

}