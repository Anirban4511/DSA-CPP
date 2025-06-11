/*Write a program which can convert a given string into it's
corresponding ASCII value and replace every letter with it's right
or left nearest vowel(which will be the possible nearest)

ex: sAmPqrsxuc => 115 65 109 80 113 114 115 120 117 99
    nearest possible vowel =>uAooo o/u uuu a/c */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int characters[] = {97, 101, 105, 111, 117, 65, 69, 73, 79, 85};

    string str = "sAmPqrsxuc";
    for (int i = 0; i < str.length(); i++)
    {
        int ascii;
        ascii = (int)str[i];
        cout << ascii << " ";
    }

    for (int i = 0; i < str.length(); i++)
    {
        int idx;
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int min = INT_MAX;
            for (int j = 5; j < 10; j++)
            {
                if (min > abs(int(str[i] - characters[j])))
                {
                    min = int(str[i] - characters[j]);
                    idx = j;
                }
            }
            str[i] = static_cast<char>(characters[idx]);
        }
        else
        {
            int min = INT_MAX;
            for (int j = 0; j < 5; j++)
            {
                if (min > abs(int(str[i] - characters[j])))
                {
                    min = int(str[i] - characters[j]);
                    idx = j;
                }
            }
            str[i] = static_cast<char>(characters[idx]);
        }
    }

    cout << str;
}