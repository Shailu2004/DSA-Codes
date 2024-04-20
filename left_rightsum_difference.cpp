#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{


public:
    vector<int> fun(vector<int> vc)
    {

        int size = vc.size();
        vector<int> left(size);
        vector<int> right(size);
        left[0] = 0;
        right[size - 1] = 0;

        for (int i = 0, j = size - 1; i < size - 1, j > 0; i++, j--)
        {
            left[i + 1] = left[i] + vc[i];
            right[j - 1] = right[j] + vc[j];
        }

        for (int i = 0; i < size; i++)
        {
          vc[i]=abs(left[i]-right[i]);
        }

        return vc;
    }

     void display(vector<int> vc)
    {                                               
        int size = vc.size();
        for (int i = 0; i < size; i++)
        {
            cout << vc[i] << " ";
        }
    }
};

int main()
{  
    solution s1;
    vector<int>vc={1};
    vector<int>ans;
    ans=s1.fun(vc);
    s1.display(ans);

}