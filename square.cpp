#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    vector<int> fun(vector<int> vc)
    {
        int size = vc.size();
        int square = 0;
        for (int i = 0; i < size; i++)
        {
            square = vc[i] * vc[i];
            vc[i] = square;
        }

        sort(vc.begin(), vc.end());
        return vc;
    }
   
   void display(vector<int>vc){
    int size=vc.size();
    for(int i=0; i<size; i++){
        cout<<vc[i]<<" ";
    }
   }


};

int main()
{  
    dream d;
    vector<int>vc={-7,-3,2,3,11};
    vc=d.fun(vc);
    d.display(vc);

}