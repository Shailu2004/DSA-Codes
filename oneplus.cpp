#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size() - 1;
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] == 9)
            {
                digits.erase(digits.begin() + i);
                digits.insert(digits.begin() + n, 1);
                digits.insert(digits.begin() + n + 1, 0);
            }
            else
            {
                int p = digits[n];
                digits.erase(digits.begin() + n);
                digits.insert(digits.begin() + n, p + 1);
            }
        }

        return digits;
    }
};

int main()
{
    Solution s1;
    vector<int> vc = {9};
    vc = s1.plusOne(vc);

    for (int n : vc)
    {
        cout << n << " ";
    }
}