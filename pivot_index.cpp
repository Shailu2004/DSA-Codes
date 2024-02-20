#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {
        int total_sum = accumulate(vc.begin(), vc.end(), 0);
        int size = vc.size();

        int left_Sum = 0;
        int right_sum;

        for (int i = 0; i < size; i++)
        {

            right_sum = total_sum - vc[i] - left_Sum;
            if (right_sum == left_Sum)
            {
                return i;
            }
            left_Sum += vc[i];
        }
        return -1;
    }
};

int main()
{

solution s1;
vector<int>vc={1,7,3,6,5,6};
cout<<s1.fun(vc);

}
