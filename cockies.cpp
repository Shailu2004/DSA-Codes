#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc1, vector<int> vc2)
    {
        sort(vc1.begin(), vc1.end());
        sort(vc2.begin(), vc2.end());

        int size1 = vc1.size();
        int size2 = vc2.size();

        int first = 0;
        int second = 0;
        int ans = 0;

        while (first < size1 && second < size2)
        {
            if (vc2[second] >= vc1[first])
            {
                ans++;
                first++;
                second++;
            }
            else
            {
                second++;
            }
        }

        return ans;
    }
};

int main()
{

solution s1;
vector<int>vc1={1,2};
vector<int>vc2={1,2,3};
cout<<s1.fun(vc1,vc2);


}