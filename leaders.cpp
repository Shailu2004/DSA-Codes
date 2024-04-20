#include <iostream>
#include<vector>
using namespace std;

vector<int> leader(int arr[], int n)
{

    vector <int> temp;
    int leader =INT16_MIN;
    int k = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > leader)
        {
            temp.push_back(arr[i]);
            leader = arr[i];
        }
    }
    

    //printing leaders .. othwewise u can sort and return vector directly
    for (int i = 0; i <temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{

    int arr[] = {1,2,3,2};
    leader(arr, 4);
}