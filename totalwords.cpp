#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dream
{

public:
    int fun(vector<string> vc)
    {

        string one;
        int word = 1;
        int size = vc.size();
        int index = 0;
        int count = 0;

        for (int i = 0; i < size; i++)
        {
            one = vc[i];
            word = 1;
            index = 0;

            while (index < one.length())
            {

                if (one[index] == ' ' || one.length() == 1)
                {
                    if (one.length() == 1)
                    {
                        count = 1;
                    }
                    else
                    {
                        word++;
                        count = max(word, count);
                    }
                }
                index++;
            }
        }

        return count;
    }

    int secondapproach(vector<string> vc)
    {
        int size = vc.size();
        int count = 0;
        int words = 0;
        for (int i = 0; i < size; i++)
        {  
            words=0;
            for (int j = 0; j < vc[i].length(); j++)
            {
                if (vc[i][j] == ' ')
                {
                    words++;
                }
            }

            if (words > count)
            {
                count = words;
            }
            
        }

        return count+1;
    }
};

int main()
{
    vector<string> vc = {"alice and bob love leetcode",
                         "i think so too","this is great thanks very much"};

    dream d;
    cout << d.secondapproach(vc);
}