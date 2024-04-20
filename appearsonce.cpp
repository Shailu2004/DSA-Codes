#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> arr)
{

    int xo = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        xo =  xo | arr[i];
    }

    return xo;
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 9, 0};
    cout << find(arr);
}
