#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vc)
{

    unordered_set<int> st;

    for (int i = 0; i < vc.size(); i++)
    {
        st.insert(vc[i]);
    }

    int count = 0;
    int longest = 1;
    int x;


    for (auto it : st)
    {

        if (st.find(it - 1) == st.end())
        {
            x = it;
            count = 1;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count++;
            }
            longest = (max(longest, count));
        }
    }

    return longest;
}

int main()
{

vector<int>vc={102,4,100,1,101,3,2,1,1};
cout<<fun(vc);

}

