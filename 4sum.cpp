#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(vector<int> vc, int target)
{
    int n = vc.size();  
    sort(vc.begin(), vc.end());
    vector<vector<int>>ans;

    for (int i = 0; i < n; i++)   //constant values
    {
        if (i > 0 && vc[i] == vc[i - 1])
        {
            continue;
        };
        for (int j = i + 1; j < n; j++)   //constant value
        {
            if (j > i + 1 && vc[j] == vc[j - 1])
            {
                continue;
            };


             int k=j+1;
             int l=n-1;

             while(k<l){
                int sum=vc[i]+vc[j];
                sum +=vc[k];
                sum +=vc[l];

                if(sum < target){
                    k++;
                }
                else if(sum > target){
                    l--;
                }
                else{
                  vector<int>temp={vc[i], vc[j], vc[k], vc[l]};
                  ans.push_back(temp);
                  k++;
                  l--;
                  while(k<l && vc[k] == vc[k-1]){
                    k++;
                  }
                  while(k<l && vc[l] == vc[l+1]){
                    l--;
                  }
                }


             }


        }
    }

     for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[0].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return ans;
}

int main()
{
    vector<int>vc={1,0,-1,0,-2,2};
    fun(vc,0);
}