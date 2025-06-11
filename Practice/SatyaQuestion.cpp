/*Write a question to add * at the end of consecutive vowel
(it will be applicable if the no of vowel is 1)*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string - " << endl;
    cin >> str;
    vector<char> v;
    for (int i = 0; i < str.length() - 1; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            if (str[i + 1] != 'a' && str[i + 1] != 'e' && str[i + 1] != 'i' && str[i + 1] != 'o' && str[i + 1] != 'u' && str[i + 1] != 'A' && str[i + 1] != 'E' && str[i + 1] != 'I' && str[i + 1] != 'O' && str[i + 1] != 'U')
            {
                v.push_back(str[i]);
                v.push_back('*');
            }
            else
            {
                v.push_back(str[i]);
            }
        }
        else
        {
            v.push_back(str[i]);
        }
    }
    if (str[str.length() - 1] == 'a' || str[str.length() - 1] == 'e' || str[str.length() - 1] == 'i' || str[str.length() - 1] == 'o' || str[str.length() - 1] == 'u' || str[str.length() - 1] == 'A' || str[str.length() - 1] == 'E' || str[str.length() - 1] == 'I' || str[str.length() - 1] == 'O' || str[str.length() - 1] == 'U')
    {
        v.push_back(str[str.length() - 1]);
        v.push_back('*');
    }
    else{
        v.push_back(str[str.length() - 1]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
