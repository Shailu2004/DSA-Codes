#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc1, vector<int> vc2)
    {

        int size = vc1.size();
        int ans = 0;
        sort(vc1.begin(), vc1.end());
        sort(vc2.begin(), vc2.end());

        for (int i = 0; i < size; i++)
        {
            ans += abs(vc1[i] - vc2[i]);
        }

        return ans;
    }
};

int main()
{

solution s1;
vector<int>vc1={4,1,5,9};
vector<int>vc2={1,3,2,6};
cout<<s1.fun(vc1, vc2);


}