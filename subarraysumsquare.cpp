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

        for (int i = 0; i < size; i++)
        {
            unordered_set<int> st;
            for (int j = i; j < size; j++)
            {
                st.insert(vc[j]);
                sum += st.size() * st.size();
            }
        }

        return sum;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {1, 1};
    cout << s1.fun(vc);
}