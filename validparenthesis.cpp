#include <iostream>
using namespace std;

bool isValid(string s)
{
    char ch;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '(':
            ch = s[i + 1];
            if (ch != ')' && s.find(')') == string::npos)
            {
                return false;
            }
            break;
        case '{':
            ch = s[i + 1];
            if (ch != '}' && s.find('}') == string::npos)
            {
                return false;
            }
            break;
        case '[':
            ch = s[i + 1];
            if (ch != ']' && s.find(']') == string::npos)
            {
                return false;
            }
            break;
        }
    }

    return true;
}

int main()
{
    string str = "{[]}";
    cout << isValid(str);
    return 0;
}
