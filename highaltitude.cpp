#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

    public:

    int fun(vector<int> vc)
    {

        int size = vc.size();
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < size; i++)
        {

            sum += vc[i];
            ans = max(ans, sum);
        }

        return ans;
    }

};

int
main()
{   
    solution s1;
    vector<int>vc={-4,-3,-2,-1,4,3,2};
    cout<<s1.fun(vc);

}