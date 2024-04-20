#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {
        sort(vc.begin(), vc.end());
        int size = vc.size();
        int need_length = vc.size() - k;
        int sum = 0;
        vector<int>ans;

        for (int i = size - 1; i >= need_length; i--)
        {  
            ans.push_back(vc[i]);
            ans.push_back(vc[i]);
            ans.push_back(vc[i]);
            ans.push_back(vc[i]);
        }
        

        for(int j=0; j<size; j++) {
            sum +=ans[j];
        }

        return sum;

    }
};

int main()
{

    solution s1;
    vector<int> vc = {1,4,1,5,7,3,6,1,9,9,3};
    cout << s1.fun(vc, 4);
}