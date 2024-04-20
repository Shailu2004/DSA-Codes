#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> vc1, vector<int> vc2)
{
    int n1 = vc1.size();
    int n2 = vc2.size();
    
    int i = 0;
    int j = 0;
    vector<int>uni;
   


    while (i < n1 && j < n2)
    { 
        if (vc1[i] <= vc2[j])
        {     
            if (uni.size() == 0 || uni.back() != vc1[i] )
            {  
              
              
                uni.push_back(vc1[i]);
            }
            i++;
        }
        else
        {
            if ( uni.size() == 0 || uni.back() != vc2[j] )
            {   
              
                uni.push_back(vc2[j]);
            }
            j++;
        }
    }

  

    while (j < n2)
    {
        if (  uni.size() == 0||uni.back() != vc2[j])
        {
            uni.push_back(vc2[j]);
           
        }
        j++;
    }

    while (i < n1)
    { 
        if (uni.size() == 0 || uni.back() != vc1[i])
        {
            uni.push_back(vc1[i]);
            
        }
        i++;
    }

    return uni;

    cout << "ggggg";
}

int main()
{

    vector<int> vc1 = {1, 1, 1, 2};
    vector<int> vc2 = {3, 4, 5};
    
    vector<int> vc = fun(vc1, vc2);

    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << " ";
    }
    return 0;
}