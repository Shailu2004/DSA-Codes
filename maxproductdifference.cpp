#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc)
    {

        sort(vc.begin(), vc.end());
        int size = vc.size();
        return vc[size - 1] * vc[size - 2] - vc[0] * vc[1];
    }


};

int main()
{
solution s1;
vector<int>vc={5,6,2,7,4};
cout<<s1.fun(vc);
}