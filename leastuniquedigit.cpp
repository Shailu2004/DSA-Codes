#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {

        int size = vc.size();
        set<int> st;

        for (int i = 0; i < size; i++)
        {
            st.insert(vc[i]);
        }

        return st.size()-k;
    }
};

int main()
{

solution s1;
vector<int>vc={4,3,1,1,3,3,2};
cout<<s1.fun(vc,3);


}