#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class demo
{

public:
    vector<int> fun(vector<int> digits)
    {   int n=digits.size() ;

         for(int i =n-1; i>=0; i--){
            digits[i]++;
            if(digits[i]<10){
                return digits;
            }

            digits[i]=0;
            
        }

        digits.insert(digits.begin(),1);
        return digits;
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
    demo d;
    vector<int> vc = {1,2,9};
    vc = d.fun(vc);
    d.display(vc);
}
