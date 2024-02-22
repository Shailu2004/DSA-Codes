#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    string fun(string s1, string s2)
    {

        bitset<100> a(s1);
        bitset<100> b(s2);
        int sum = a.to_ulong() + b.to_ulong();
        }
};

int main()
{
    solution s1;
    cout << s1.fun("11", "1");
}