#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    vector<int> fun(vector<int> vc1, int m, vector<int> vc2, int n)
    {

        int i = m; // pointing to first array's last valid element
        for (int j = 0; j < n; j++)
        {
            vc1[i] = vc2[j];
            i++;
        }
        sort(vc1.begin(), vc1.end());
        return vc1;
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
    dream d;
    vector<int> vc1 = {1, 2, 3, 0, 0, 0};
    int m = vc1.size();
    vector<int> vc2 = {2, 5, 6};
    int n = vc2.size();
    vc1 = d.fun(vc1, 3, vc2, 3);
    d.display(vc1);
}