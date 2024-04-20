#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> arr, int val)
{
    int n = arr.size();
    vector<int> vc;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val){
           

        vc.push_back(arr[i]);
        }
    }
    

    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    

    return vc.size();
}

int main()
{
    vector<int>arr={0,1,2,2,3,0,4,2};
    fun(arr,2);
}