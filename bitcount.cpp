#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<int> vc, int k)
    {
        int size = vc.size();
        int count=0;
        int sum=0;


        for (int i = 0; i < size; i++)
        {
            bitset<100> binary(i);
            count = binary.count();
            if(count == k){
                sum +=vc[i];
            }


        }

        return sum;
    }
};

int main()
{

solution s1;
vector<int>vc={4,3,2,1};
cout<<s1.fun(vc,2);

}