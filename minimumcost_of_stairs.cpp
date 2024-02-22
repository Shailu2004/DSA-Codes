#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {
        int size = vc.size();
        if(size == 1) return vc[0];
        vector<int> ans(size + 1);
        ans[1] = vc[0];
        ans[2] = vc[1];

        for (int i = 2; i <size; i++)
        {
            ans[i + 1] = min(ans[i], ans[i - 1]) + vc[i];
        }


        return min (ans[size], ans[size-1]);
    }

};

int
main()
{

solution s1;
vector<int>vc={10,15,20};
cout<<s1.fun(vc);


}