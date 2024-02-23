#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(vector<int> vc)
    {

        int size = vc.size();
        map<int, int> mpp;
        set<int>st;

        for (int i = 0; i < size; i++)
        {
            mpp[vc[i]]++;
        }

        for (auto it : mpp)
        {
            if(st.find(it.second) != st.end()){
                return false;
            }
            else{
                st.insert(it.second);
            }
        }

        return true;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {-3,0,1,-3,1,1,1,-3,10,0};
    cout<<s1.fun(vc);
}
