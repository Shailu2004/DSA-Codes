#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> arr)
{
    int n = arr.size();
    int index=-1;
    // find breakpoint
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    

    //reverse the vector if it is last permutation and their is no breakpoint so that we wil get first permutation  of that elements
    if(index ==-1){
        reverse(arr.begin(),arr.end());
    }

    // swap that breakpoint with value value which is slighly greater than it
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }

     ///sort the array from index+1 and then add it
     sort(arr.begin()+index+1,arr.end());

     for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
     }
     


}

int main()
{
    vector<int>arr={3,2,1};
    permutation(arr);
}