#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<vector<string>> vc, string rulekey, string rulevalue)
    {

        int size = vc.size();
        int ans = 0;

        for (int i = 0; i < size; i++)
        {
           
            
                if (rulekey == "type" && vc[i][0] == rulevalue)
                {
                    ans++;
                }
                else if (rulekey == "color" && vc[i][1] == rulevalue)
                {
                    ans++;
                }
                else if (rulekey == "name" && vc[i][2] == rulevalue)
                {
                    ans++;
                }
            }
    
        return ans;
    }
};

int main()
{
    solution s1;
    vector<vector<string>> vc = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "silver", "iphone"}};
    cout << s1.fun(vc, "color", "blue");
}