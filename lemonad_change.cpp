#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    bool fun(vector<int> vc)
    {

        vector<int> ans;
        int size = vc.size();
        int five = 0;
        int ten = 0;

        for (int i = 0; i < size; i++)
        {
            if (vc[i] == 5)
            {
                five++;
            }
            else if (vc[i] == 10)
            {
                if (five == 0)
                {
                    return false;
                }
                five--;
            }
            else
            {
                if (ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    five--;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{

    solution s1;
    vector<int> vc = {5, 5, 10, 10, 20};
    cout << s1.fun(vc);
}
