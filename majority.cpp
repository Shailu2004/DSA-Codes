#include <iostream>
#include <map>
using namespace std;


//optimal approach
int majority(int arr[], int n)
{
    int ele;
    int cn = 0;

    for (int i = 0; i < n; i++)
    {
        if (cn == 0)
        {
            cn = 1;
            ele = arr[i];
        }
        else if (arr[i] == ele)
        {
            cn++;
        }
        else
        {
            cn--;
        }
    }
    int cn2 = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == ele)
            cn2++;
    }

    if (cn2 > n / 2)
        return ele;

    return -1;
}


//better approach
int maj_map(int arr[], int n)
{

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto i : mpp)
    {

        if (i.second > n / 2)
        {
            return i.first;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maj_map(arr, n);
}