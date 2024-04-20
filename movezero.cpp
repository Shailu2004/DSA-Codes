#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    void fun(vector<int> vc)
    {
        int n = vc.size();
        int j = -1;

        for (int i = 0; i < n; i++)
        {
            if (vc[i] == 0)
            {
                j = i;
                break;
            }
        }
        
        

        for (int i = j + 1; i < n; i++)
        {
            if (vc[i] != 0 && j != -1)
            {
                swap(vc[i], vc[j]);
                j++;
            }
        }

        for (int k = 0; k < n; k++)
        {
            cout << vc[k] << " ";
        }
    }

     
     void fun2(vector<int>vc){

       sort(vc.begin(), vc.end());
       reverse(vc.begin(), vc.end());

     }


};

int main()
{
    dream d;
    vector<int> vc = {0,1,0,3,1,2};
    d.fun2(vc);
}