// Convert the uppercase to lowercase and lowercase to uppercase
// if the counting of uppercase is max then convert into lowercase
// else convert into uppercase

// Suppose sample input 1 - AaBbCcDdF so the output - AABBCCDDFF
//         sample input 2 - xYz so the output will be - xyz

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int countUpper = 0, countLower = 0, i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countUpper += 1;
        }
        else
        {
            countLower += 1;
        }
        i++;
    }
    i = 0;
    if (countUpper > countLower)
    {
        while (i < s.length())
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
            i++;
        }
    }
   
    else
    {
        i=0;
        while (i < s.length())
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            i++;
        }
    }
    cout << "Output - " << s;
}