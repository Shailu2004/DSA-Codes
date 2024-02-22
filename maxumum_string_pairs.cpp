#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<string> vc)
    {
        set<string> st;
        int size = vc.size();
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (st.find(vc[i]) != st.end())
            {
                ans++;
            }
            else
            {
                reverse(vc[i].begin(), vc[i].end());
                st.insert(vc[i]);
            }
        }

        return ans;
    }
};

int main()
{
    solution s1;
    vector<string>vc={"ab","cc"};
    cout<<s1.fun(vc);
}
