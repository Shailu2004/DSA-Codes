#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<vector<int>> vc)
    {

        int size = vc.size()-1;
        int ans = 0;

        for (int i = 0; i < size; i++)
        {

            ans += max(abs(vc[i + 1][1] - vc[i][1]),
                       abs(vc[i + 1][0] - vc[i][0]));
        }
        
        return ans;
    }
};

int main()
{

solution s1;
vector<vector<int>>vc={{3,2},{-2,2}};
cout<<s1.fun(vc);


}