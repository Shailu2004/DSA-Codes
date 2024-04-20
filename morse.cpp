#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    int fun(vector<string> vc)
    {

        int size = vc.size();
        set<string> ans;
        string str;
        unordered_map<char, string> mpp = {
            {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, 
            {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, 
            {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, 
            {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, 
            {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, 
            {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, 
            {'y', "-.--"}, {'z', "--.."}};

        for (auto it : vc)
        {
            str = "";
            for (auto ch : it)
            {
                str += mpp[ch];
            }

            ans.insert(str);
        }

        return ans.size();
    }
};

int main()
{
    solution s1;
    vector<string> vc = {"a"};
    cout << s1.fun(vc);
}