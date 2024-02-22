#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void fun(vector<int> vc1, vector<int> vc2)
    {

        int size1 = vc1.size();
        int size2 = vc2.size();
        vector<int> vc = {0, 0};

        for (int i = 0; i < size1; i++)
        {
            if (find(vc2.begin(), vc2.end(), vc1[i]) != vc2.end())
            {
                vc[0]++;
            }
        }

        for (int j = 0; j < size2; j++)
        {
            if (find(vc1.begin(), vc1.end(), vc2[j]) != vc1.end())
            {
                vc[1]++;
            }
        }

        for (int k = 0; k < 2; k++)
        {
            cout << vc[k] << " ";
        }
    }
};

int main()
{

solution s1;
vector<int>vc={3,4,2,3};
vector<int>vc1={1,5};
s1.fun(vc,vc1);


}