#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {

        int size = vc.size();
        sort(vc.begin(), vc.end());
        int ans = 0;

        for (int i = 0; i < k; i++)
        {
            ans += vc[size - 1];
            vc[size - 1]++;
        }

        return ans;
    }
};

int main()
{

solution s1;
vector<int>vc={1,2,3,4,5};
cout<<s1.fun(vc,3);

}