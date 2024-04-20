#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

    int fun(vector<int> vc)
    {

        int size = vc.size();

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int k=j+1;
                int l=size-1;
                int sum=0;
                while(j<k){
                   sum +=vc[i]+vc[j];
                   sum +=vc[k];
                   
                }
            }
        }
    }

};

int
main()
{
}